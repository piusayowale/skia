/*
 * Copyright 2020 Google LLC
 *
 * Use of this source code is governed by a BSD-style license that can be
 * found in the LICENSE file.
 */

#ifndef SKSL_DSL
#define SKSL_DSL

#include "src/sksl/dsl/DSLCore.h"
#include "src/sksl/dsl/DSLExpression.h"
#include "src/sksl/dsl/DSLFunction.h"
#include "src/sksl/dsl/DSLType.h"

namespace SkSL {

namespace dsl {

using Expression = DSLExpression;
using Field = DSLField;
using Function = DSLFunction;
using GlobalVar = DSLGlobalVar;
using Layout = DSLLayout;
using Modifiers = DSLModifiers;
using Parameter = DSLParameter;
using Statement = DSLStatement;
using Var = DSLVar;

} // namespace dsl

} // namespace SkSL

#endif
