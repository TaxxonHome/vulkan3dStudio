cmake_minimum_required(VERSION 3.4)
project(Graphics)

set(CMAKE_CXX_STANDARD 17)

find_package(OpenGL 4.5 REQUIRED)

add_subdirectory(ExternalLibrrarys/glfw-3.3.2)
add_subdirectory(ExternalLibrrarys/glm)
add_subdirectory(ExternalLibrrarys/assimp-5.0.1)

add_executable(Graphics main.cpp ${PROJECT_SOURCE_DIR}/ExternalLibrrarys/glad/src/glad.c
        ${PROJECT_SOURCE_DIR}/ExternalLibrrarys/imgui/imgui.cpp
        ${PROJECT_SOURCE_DIR}/ExternalLibrrarys/imgui/imgui.h
        ${PROJECT_SOURCE_DIR}/ExternalLibrrarys/imgui/imconfig.h
        ${PROJECT_SOURCE_DIR}/ExternalLibrrarys/imgui/imgui_draw.cpp
        ${PROJECT_SOURCE_DIR}/ExternalLibrrarys/imgui/backends/imgui_impl_glfw.cpp
        ${PROJECT_SOURCE_DIR}/ExternalLibrrarys/imgui/backends/imgui_impl_glfw.h
        ${PROJECT_SOURCE_DIR}/ExternalLibrrarys/imgui/backends/imgui_impl_opengl3.cpp
        ${PROJECT_SOURCE_DIR}/ExternalLibrrarys/imgui/backends/imgui_impl_opengl3.h
        ${PROJECT_SOURCE_DIR}/ExternalLibrrarys/imgui/imgui_internal.h
        ${PROJECT_SOURCE_DIR}/ExternalLibrrarys/imgui/imgui_widgets.cpp
        ${PROJECT_SOURCE_DIR}/ExternalLibrrarys/imgui-filebrowser/imgui-filebrowser-master/imfilebrowser.h
        OpenGlWindow.cpp OpenGlWindow.h GlfwCallbackManager.h 3dstudio.h Vertex.h Shader.h Shader.cpp Mesh.cpp Mesh.h
        Model.cpp Model.h Controller.cpp Controller.h Camera.cpp Camera.h Communication.h ExternalLibrrarys/stb/stb_image.h ExternalLibrrarys/stb/stb_image.cpp Texture.cpp Texture.h)

include_directories( ${OPENGL_INCLUDE_DIRS})

target_link_libraries(Graphics ${OPENGL_LIBRARIES})
target_link_libraries(Graphics glfw)
target_link_libraries(Graphics glm)
target_link_libraries(Graphics assimp)

target_include_directories(Graphics PUBLIC ExternalLibrrarys/glad/include)
target_include_directories(Graphics PUBLIC ExternalLibrrarys/imgui)
target_include_directories(Graphics PUBLIC ExternalLibrrarys/imgui-filebrowser)