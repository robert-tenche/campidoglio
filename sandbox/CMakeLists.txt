get_filename_component(COMPONENT_NAME "${CMAKE_CURRENT_SOURCE_DIR}" NAME)

add_executable(
  ${COMPONENT_NAME}
  main.cpp
)