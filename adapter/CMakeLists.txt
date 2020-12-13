cmake_minimum_required(VERSION 3.0.0)
project(adapter VERSION 0.1.0)

include(CTest)
enable_testing()

add_executable(adapter main.cpp)

link_directories(ffmpeg/ffmpeg/lib)
target_include_directories(${PROJECT_NAME} PRIVATE ffmpeg/ffmpeg/include)
target_link_libraries(${PROJECT_NAME} 
    ${CMAKE_SOURCE_DIR}/ffmpeg/ffmpeg/lib/libavformat.a
    ${CMAKE_SOURCE_DIR}/ffmpeg/ffmpeg/lib/libavcodec.a
    ${CMAKE_SOURCE_DIR}/ffmpeg/ffmpeg/lib/libavdevice.a
    ${CMAKE_SOURCE_DIR}/ffmpeg/ffmpeg/lib/libavfilter.a
    ${CMAKE_SOURCE_DIR}/ffmpeg/ffmpeg/lib/libavutil.a
    ${CMAKE_SOURCE_DIR}/ffmpeg/ffmpeg/lib/libswresample.a
    ${CMAKE_SOURCE_DIR}/ffmpeg/ffmpeg/lib/libswscale.a
)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
