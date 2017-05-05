project(SonoApp)
add_executable(SonoApp SonoApp.cpp)
target_link_libraries(SonoApp Sono)
install(TARGETS SonoApp RUNTIME DESTINATION ${BIN_DIR})
