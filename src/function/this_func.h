/*
 * @Author: Ricken
 * @Email: me@ricken.cn
 * @Date: 2024-05-22 15:47:17
 * @LastEditTime: 2024-08-22 17:15:02
 * @FilePath: /kk_frame/src/function/this_func.h
 * @Description: 此项目的一些功能函数
 * @BugList: 
 * 
 * Copyright (c) 2024 by Ricken, All Rights Reserved. 
 * 
 */

#ifndef _THIS_FUNC_H_
#define _THIS_FUNC_H_

#include <string>

// char转short
#define CHARTOSHORT(H,L) (((H) << 8) | (L)) 

// char转int
#define CHARTOINT(D1,D2,D3,D4) (((D4) << 24) | ((D3) << 16) |((D2) << 8) | (D1))

// 发送按键
#define SENDKEY(k,down) analogInput(k,down)

/// @brief 打印项目信息
/// @param name 
void printProjectInfo(const char* name);

/// @brief 发送按键
/// @param code 
/// @param value 
void analogInput(int code, int value);

/// @brief 刷新屏保
void refreshScreenSaver();

/// @brief 
/// @param data 
/// @param swap 默认小端 
/// @return 
uint32_t uint8_t_to_uint32_t(uint8_t* data, bool swap = false);

#endif