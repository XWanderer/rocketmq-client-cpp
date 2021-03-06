/*
 * Licensed to the Apache Software Foundation (ASF) under one or more
 * contributor license agreements.  See the NOTICE file distributed with
 * this work for additional information regarding copyright ownership.
 * The ASF licenses this file to You under the Apache License, Version 2.0
 * (the "License"); you may not use this file except in compliance with
 * the License.  You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
#ifndef __C_MQEXCPTION_H__
#define __C_MQEXCPTION_H__
#include "CCommon.h"

#ifdef __cplusplus
extern "C" {
#endif

#define MAX_EXEPTION_MSG_LENGTH  512
#define MAX_EXEPTION_FILE_LENGTH 256
#define MAX_EXEPTION_TYPE_LENGTH 128
typedef struct _CMQException_{
    int error;
    int line;
    char file[MAX_EXEPTION_FILE_LENGTH];
    char msg[MAX_EXEPTION_MSG_LENGTH];
    char type[MAX_EXEPTION_TYPE_LENGTH];

} CMQException;

#ifdef __cplusplus
};
#endif
#endif
