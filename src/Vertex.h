//
// Created by taxxon on 2021-01-18.
//

#ifndef VULKAN3DSTUDIO_VERTEX_H
#define VULKAN3DSTUDIO_VERTEX_H

#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>

struct Vertex {
    glm::vec3 position;
    glm::vec3 texCoord;
    glm::vec3 normal;
};

#endif //VULKAN3DSTUDIO_VERTEX_H
