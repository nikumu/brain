/* This is the source code of Brain Programming Language.
 * It is licensed under GNU GPL v. 3 or later.
 * You should have received a copy of the license in this archive (see LICENSE).
 *
 * Copyright Brain, 2016.
 */

#ifndef BREAK_EXPR_H
#define BREAK_EXPR_H

#include <llvm/Transforms/Utils/BuildLibCalls.h>
#include <llvm/IR/IRBuilder.h>
#include <llvm/IR/Module.h>

#include <iostream>

#include "Expr.h"

/**
 * @brief Class that represents the break operator in Brain.
 */
class BreakExpr : public Expr
{
public:
    BreakExpr() {}
    ~BreakExpr() {}
    /**
     * @brief
     * @param M
     * @param B
     * @param BreakBB
     */
    void code_gen(llvm::Module *M,
             llvm::IRBuilder<> &B,
        llvm::BasicBlock *BreakBB);
    /**
     * @brief
     * @param level
     */
    void debug_description(int level);
    /**
     * @brief
     */
    ExpressionType expression_category();
    /**
     * @brief
     */
    void ast_code_gen();
};

#endif // BREAK_EXPR_H
