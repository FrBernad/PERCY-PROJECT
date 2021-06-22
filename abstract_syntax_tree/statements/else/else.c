#include "else.h"

static ast_node_t* ast_else_process(ast_node_t* node) {
    return NULL;
}

static void ast_else_destroy() {
}

ast_functions_t ast_else_provider() {
    ast_functions_t functions = {
        .process = ast_else_process,
        .destroy = ast_else_destroy};
    return functions;
}

ast_node_t* create_ast_else_node(){
    return NULL;
}
