//
// Created by taxxon on 2021-01-21.
//

#pragma once

#ifdef STUDIO_BUILD_DLL
    #define STUDIO_API _declspecd(dllexport)
#else
    #define HAZEL_API _declspec(dllimport)
#endif
