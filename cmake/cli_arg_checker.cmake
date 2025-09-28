# Mandatory arguments:
# 1. LANG=C

if(NOT "${LANG}" STREQUAL "C")
  message(FATAL_ERROR "[FATAL_ERROR] LANG=C - argument not provided")
endif()

