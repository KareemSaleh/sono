project(SonoDemo)
add_executable(SonoDemo SonoDemo.cpp)
target_link_libraries(SonoDemo Sono)
install(TARGETS SonoDemo RUNTIME DESTINATION ${BIN_DIR})
