cmake_minimum_required(VERSION 3.4)
project(vulkan3DStudio)

set(CMAKE_CXX_STANDARD 17)

find_package(Vulkan REQUIRED)

add_subdirectory(../externalLibrrarys/glfw-3.3.2)
add_subdirectory(../externalLibrrarys/glm)
add_subdirectory(../externalLibrrarys/assimp-5.0.1)

add_executable(vulkan3DStudio src/3DStudio/main.cpp
        ../externalLibrrarys/glad/src/glad.c
        ../externalLibrrarys/imgui/imgui.cpp
        ../externalLibrrarys/imgui/imgui.h
        ../externalLibrrarys/imgui/imconfig.h
        ../externalLibrrarys/imgui/imgui_draw.cpp
        ../externalLibrrarys/imgui/backends/imgui_impl_glfw.cpp
        ../externalLibrrarys/imgui/backends/imgui_impl_glfw.h
        ../externalLibrrarys/imgui/backends/imgui_impl_vulkan.cpp
        ../externalLibrrarys/imgui/backends/imgui_impl_vulkan.h
        ../externalLibrrarys/imgui/imgui_internal.h
        ../externalLibrrarys/imgui/imgui_widgets.cpp
        ../externalLibrrarys/imgui-filebrowser/imgui-filebrowser-master/imfilebrowser.h src/3DStudio/Vertex.h src/3DStudio/Texture.cpp src/3DStudio/Texture.h src/3DStudio/Shader.cpp src/3DStudio/Shader.h src/3DStudio/Model.cpp src/3DStudio/Model.h src/3DStudio/Mesh.cpp src/3DStudio/Mesh.h src/3DStudio/Camera.cpp src/3DStudio/Camera.h src/3DStudio/Material.cpp src/3DStudio/Material.h src/3DStudio/GlfwCallbackManager.h src/3DStudio/Application.cpp src/3DStudio/Application.h src/3DStudio/Core.h)

include_directories( ${OPENGL_INCLUDE_DIRS})

target_link_libraries(vulkan3DStudio ${OPENGL_LIBRARIES})
target_link_libraries(vulkan3DStudio glfw)
target_link_libraries(vulkan3DStudio glm)
target_link_libraries(vulkan3DStudio assimp)

target_include_directories(vulkan3DStudio PUBLIC ../externalLibrrarys/glad/include)
target_include_directories(vulkan3DStudio PUBLIC ../externalLibrrarys/imgui)
target_include_directories(vulkan3DStudio PUBLIC ../externalLibrrarys/imgui-filebrowser)