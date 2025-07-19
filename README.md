# 🎮 Cub3D - 42 School Project

A 3D raycasting game engine inspired by Wolfenstein 3D, built with MLX42 graphics library. This project implements a first-person perspective 3D game with texture mapping, collision detection, and smooth movement controls.

## 📋 Table of Contents

- [Overview](#overview)
- [Features](#features)
- [Installation](#installation)
- [Usage](#usage)
- [Controls](#controls)
- [Map Format](#map-format)
- [Project Structure](#project-structure)
- [Technologies Used](#technologies-used)
- [Screenshots](#screenshots)
- [Contributing](#contributing)
- [License](#license)

## 🎯 Overview

Cub3D is a 3D game engine that uses raycasting to create a pseudo-3D environment from a 2D map. The project consists of two versions:

- **Mandatory**: Basic 3D raycasting engine with texture mapping
- **Bonus**: Enhanced version with additional features like doors, animated sprites, sound effects, and mouse controls

## ✨ Features

### Mandatory Version
- 🎮 First-person 3D perspective
- 🧱 Texture mapping for walls
- 🎨 Customizable floor and ceiling colors
- 🗺️ 2D map parsing and validation
- 🚶 Player movement and rotation
- 🎯 Raycasting engine with collision detection
- 🖼️ Multiple texture support (North, South, East, West walls)

### Bonus Version (Enhanced Features)
- 🚪 Interactive doors
- 🎭 Animated sprites (manjal)
- 🔊 Background sound effects
- 🖱️ Mouse look controls
- 🗺️ Full map view toggle
- 🎨 Enhanced rendering with door textures
- 🎵 Audio threading support

## 🛠️ Installation

### Prerequisites

- macOS (tested on macOS 22.1.0)
- GCC compiler
- Make
- GLFW library (for MLX42)

### Building the Project

1. **Clone the repository**
   ```bash
   git clone <your-repo-url>
   cd cub3d-42
   ```

2. **Build the mandatory version**
   ```bash
   make
   ```

3. **Build the bonus version**
   ```bash
   make bonus
   ```

4. **Build both versions**
   ```bash
   make all
   ```

### Available Make Commands

- `make` - Builds the mandatory version
- `make bonus` - Builds the bonus version
- `make all` - Builds both versions
- `make clean` - Removes object files
- `make fclean` - Removes object files and executables
- `make re` - Rebuilds the project from scratch

## 🎮 Usage

### Running the Game

1. **Mandatory version:**
   ```bash
   ./cub3D <map_file.cub>
   ```

2. **Bonus version:**
   ```bash
   ./cub3D_bonus <map_file.cub>
   ```

### Example Maps

The project includes example map files:
- `mandatory/igo.cub` - Basic map for mandatory version
- `bonus/igo_bonus.cub` - Enhanced map with doors for bonus version

## 🎯 Controls

### Keyboard Controls
- **WASD** - Move forward/left/backward/right
- **Left/Right Arrow Keys** - Rotate camera
- **ESC** - Exit game

### Bonus Version Additional Controls
- **Mouse** - Look around (when cursor mode is enabled)
- **M** - Toggle full map view
- **Click** - Interact with doors
- **Space** - Toggle cursor mode

## 🗺️ Map Format

The game uses `.cub` files to define maps. Here's the format:

```
# Texture paths (required)
NO ./path/to/north_texture.png
SO ./path/to/south_texture.png
WE ./path/to/west_texture.png
EA ./path/to/east_texture.png

# Floor and ceiling colors (RGB format)
F 112,128,124
C 135,206,235

# Map layout (after empty line)
111111111111
10N000000001
100000000001
100000000001
111111111111
```

### Map Elements
- `1` - Wall
- `0` - Empty space
- `N/S/E/W` - Player spawn position and direction
- `D` - Door (bonus version only)

### Map Rules
- Must be rectangular
- Must be surrounded by walls
- Must have exactly one player spawn point
- Must have valid texture paths
- Must have valid RGB colors (0-255 range)

## 📁 Project Structure

```
cub3d-42/
├── mandatory/                 # Mandatory version
│   ├── cub3d.c               # Main program
│   ├── includes/
│   │   └── cub3d.h           # Header file
│   ├── parsing/              # Map parsing logic
│   ├── rayCasting/           # Raycasting engine
│   ├── rendering/            # Graphics rendering
│   ├── hooks/                # Input handling
│   ├── mouvements/           # Player movement
│   ├── utils/                # Utility functions
│   ├── libft/                # Custom library functions
│   ├── gnl/                  # Get Next Line implementation
│   ├── g_col/                # Garbage collector
│   ├── textures/             # Wall textures
│   └── igo.cub              # Example map
├── bonus/                    # Bonus version
│   ├── cub3d_bonus.c         # Main program
│   ├── includes/
│   │   └── cub3d_bonus.h     # Header file
│   ├── sfx/                  # Sound effects
│   ├── textures/
│   │   ├── manjal/           # Animated sprites
│   │   └── door.png          # Door texture
│   └── igo_bonus.cub        # Example map with doors
├── Makefile                  # Build configuration
└── README.md                 # This file
```

## 🛠️ Technologies Used

- **C Language** - Core programming language
- **MLX42** - Graphics library for macOS
- **GLFW** - Window management and input handling
- **Pthread** - Multi-threading for audio (bonus)
- **Custom Libraries**:
  - `libft` - Custom utility functions
  - `get_next_line` - File reading utility
  - `g_collector` - Memory management

## 🎨 Screenshots

*[Add screenshots of your game here]*

## 🤝 Contributing

This is a 42 School project, but if you have suggestions or find bugs, feel free to:

1. Fork the repository
2. Create a feature branch
3. Make your changes
4. Submit a pull request

## 📄 License

This project is part of the 42 School curriculum. The code is written for educational purposes.

---

**Author**: [Your Name]  
**School**: 42 School  
**Project**: Cub3D  
**Date**: 2024

*Built with ❤️ and lots of coffee ☕* 