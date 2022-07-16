add_library(tabulate "")

target_sources(tabulate
PUBLIC
    ${CMAKE_CURRENT_FUNCTION_LIST_DIR}/asciidoc_exporter.hpp
    ${CMAKE_CURRENT_FUNCTION_LIST_DIR}/cell.hpp
    ${CMAKE_CURRENT_FUNCTION_LIST_DIR}/color.hpp
    ${CMAKE_CURRENT_FUNCTION_LIST_DIR}/column_format.hpp
    ${CMAKE_CURRENT_FUNCTION_LIST_DIR}/column.hpp
    ${CMAKE_CURRENT_FUNCTION_LIST_DIR}/exporter.hpp
    ${CMAKE_CURRENT_FUNCTION_LIST_DIR}/font_align.hpp
    ${CMAKE_CURRENT_FUNCTION_LIST_DIR}/font_style.hpp
    ${CMAKE_CURRENT_FUNCTION_LIST_DIR}/format.hpp
    ${CMAKE_CURRENT_FUNCTION_LIST_DIR}/latex_exporter.hpp
    ${CMAKE_CURRENT_FUNCTION_LIST_DIR}/markdown_exporter.hpp
    ${CMAKE_CURRENT_FUNCTION_LIST_DIR}/optional_lite.hpp
    ${CMAKE_CURRENT_FUNCTION_LIST_DIR}/printer.hpp
    ${CMAKE_CURRENT_FUNCTION_LIST_DIR}/row.hpp
    ${CMAKE_CURRENT_FUNCTION_LIST_DIR}/string_view_lite.hpp
    ${CMAKE_CURRENT_FUNCTION_LIST_DIR}/table_internal.hpp
    ${CMAKE_CURRENT_FUNCTION_LIST_DIR}/table.hpp
    ${CMAKE_CURRENT_FUNCTION_LIST_DIR}/tabulate.hpp
    ${CMAKE_CURRENT_FUNCTION_LIST_DIR}/termcolor.hpp
    ${CMAKE_CURRENT_FUNCTION_LIST_DIR}/utf8.hpp
    ${CMAKE_CURRENT_FUNCTION_LIST_DIR}/variant_lite.hpp
)

target_include_directories(tabulate
PUBLIC
    ${CMAKE_CURRENT_FUNCTION_LIST_DIR}
)