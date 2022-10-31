// SPDX-FileCopyrightText: 2022 UnionTech Software Technology Co., Ltd.
//
// SPDX-License-Identifier: LGPL-3.0-or-later

#define DTK_NAMESPACE Dtk
#define DDEMO_NAMESPACE Demo
#define DTK_DEMO_NAMESPACE DTK_NAMESPACE::DDEMO_NAMESPACE

#define DDEMO_USE_NAMESPACE using namespace DTK_DEMO_NAMESPACE;

#define DDEMO_BEGIN_NAMESPACE                                                                                                    \
    namespace DTK_NAMESPACE {                                                                                                    \
    namespace DDEMO_NAMESPACE {
#define DDEMO_END_NAMESPACE                                                                                                      \
    }                                                                                                                            \
    }
