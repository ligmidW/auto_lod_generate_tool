# Auto LOD Generate Tool

这是一个用于 Unreal Engine 的自动 LOD（Level of Detail）生成工具插件。支持外部fbx文件直接启动ue无头模式生成lod。
This is an automatic LOD (Level of Detail) generation tool plugin for Unreal Engine. Supports external fbx files to directly start ue headless mode to generate LODs

直接将文件夹复制到ue过程plugins目录下
Simply copy the folder to the UE project's plugins directory.

## 功能特点 | Features

- 自动为静态网格体生成 LOD | Automatically generate LODs for static meshes
- 支持批量处理 FBX 文件 | Support batch processing of FBX files
- 可自定义输出路径 | Customizable output path
- 支持无头模式运行 | Support headless mode operation

## 使用方法 | Usage

### 通过 Python 脚本运行 | Run via Python Script

1. 确保已正确安装插件 | Ensure the plugin is properly installed
2. 使用提供的 `launch.py` 脚本运行：| Run using the provided `launch.py` script:
   ```bash
   python launch.py
   ```

### 通过批处理文件运行 | Run via Batch File

使用提供的 `run_headless.bat` 在无头模式下运行工具。
Use the provided `run_headless.bat` to run the tool in headless mode.

## 目录结构 | Directory Structure

- `auto_lod_generate_tool/` - 插件主要源代码 | Plugin main source code
- `launch.py` - Python 启动脚本 | Python launch script
- `run_headless.bat` - 无头模式运行批处理文件 | Headless mode batch file

## 系统要求 | System Requirements

- Unreal Engine 安装 | Unreal Engine installation
- Python 环境（用于运行启动脚本）| Python environment (for running launch script)

## 注意事项 | Precautions

- 请确保输入的 FBX 文件路径正确 | Ensure the input FBX file path is correct
- 确保有足够的磁盘空间用于存储生成的 LOD 文件 | Ensure sufficient disk space for storing generated LOD files
- 建议在生成 LOD 之前备份原始文件 | Recommend backing up original files before generating LODs

## 详细配置说明 | Detailed Configuration Guide

### 1. Python 脚本配置 (launch.py) | Python Script Configuration

在 `launch.py` 中，你需要设置输入和输出路径：
In `launch.py`, you need to set the input and output paths:

```python
def main():
    # 设置输入FBX文件路径 | Set input FBX file path
    input_path = get_absolute_path("你的FBX文件路径")
    # 例如 | Example: D:/working_path/2024/Unreal_Engine/lod_test/head01.fbx"

    # 设置输出目录路径 | Set output directory path
    output_path = get_absolute_path("输出目录路径")
    # 例如 | Example: D:/working_path/2024/Unreal_Engine/lod_test/output"
```

注意 | Note:
- 路径可以使用正斜杠(/) 或反斜杠(\\) | Paths can use forward slashes(/) or backslashes(\\)
- 路径必须是绝对路径 | Paths must be absolute
- 确保输出目录存在，如果不存在会自动创建 | Ensure output directory exists, it will be created automatically if it doesn't

### 2. 批处理文件配置 (run_headless.bat) | Batch File Configuration

在 `run_headless.bat` 中，需要配置以下路径：
In `run_headless.bat`, you need to configure the following path:

```batch
set UE_PATH=C:\Program Files\Epic Games\UE_5.5
```

修改 `UE_PATH` 为你的虚幻引擎安装路径。例如：
Modify `UE_PATH` to your Unreal Engine installation path. For example:
- UE 5.0: `C:\Program Files\Epic Games\UE_5.0`
- UE 5.1: `C:\Program Files\Epic Games\UE_5.1`
- UE 5.2: `C:\Program Files\Epic Games\UE_5.2`

确保 `your_project.uproject` 文件位于正确的位置（在插件目录的上一级）。
Ensure the `your_project.uproject` file is in the correct location (in the parent directory of the plugin).

## 运行步骤 | Operation Steps

1. 使用 Python 脚本方式 | Using Python Script:
   - 打开 `launch.py` | Open `launch.py`
   - 设置好输入和输出路径 | Set up input and output paths
   - 直接运行 Python 脚本 | Run Python script directly: `python launch.py`

2. 使用批处理文件方式（推荐）| Using Batch File (Recommended):
   - 确认 `UE_PATH` 设置正确 | Confirm `UE_PATH` is set correctly
   - 双击运行 `run_headless.bat` | Double click to run `run_headless.bat`
   - 或在命令行中运行 | Or run in command line: `run_headless.bat`

## 常见问题 | Common Issues

1. 如果运行批处理文件时报错，请检查：| If batch file execution fails, check:
   - 虚幻引擎安装路径是否正确 | Is Unreal Engine installation path correct
   - .uproject 文件是否在正确位置 | Is .uproject file in the correct location
   - 是否有足够的权限运行 | Do you have sufficient permissions to run

2. 如果 Python 脚本执行失败，请检查：| If Python script execution fails, check:
   - 输入文件路径是否存在 | Does the input file path exist
   - 输出目录是否有写入权限 | Do you have write permissions for the output directory
   - FBX 文件格式是否正确 | Is the FBX file format correct
