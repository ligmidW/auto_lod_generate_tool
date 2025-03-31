import unreal
import os

def get_absolute_path(path):
    return os.path.abspath(os.path.normpath(path)).replace('\\', '/')

def ensure_directory(path):
    if not os.path.exists(path):
        os.makedirs(path)

def get_static_mesh(fbx_path):
    base_name = os.path.splitext(os.path.basename(fbx_path))[0]
    asset_path = f"/Game/ImportedMeshes/{base_name}"
    return unreal.load_object(None, asset_path)

def export_fbx(static_mesh, output_path):
    if not static_mesh:
        return False

    ensure_directory(output_path)
    fbx_filename = os.path.join(output_path, f"{static_mesh.get_name()}.fbx").replace('\\', '/')

    export_task = unreal.AssetExportTask()
    export_task.object = static_mesh
    export_task.filename = fbx_filename
    export_task.automated = True
    export_task.replace_identical = True
    export_task.prompt = False
    export_task.options = unreal.FbxExportOption()

    try:
        return unreal.Exporter.run_asset_export_task(export_task)
    except:
        return False

def main():
    input_path = get_absolute_path("D:/working_path/2024/Unreal_Engine/lod_test/head01.fbx")
    output_path = get_absolute_path("D:/working_path/2024/Unreal_Engine/lod_test/output")

    if unreal.AutoLodGenerateToolBPLibrary.lod_generate(input_path, output_path):
        static_mesh = get_static_mesh(input_path)
        if static_mesh:
            export_fbx(static_mesh, output_path)

if __name__ == '__main__':
    main()