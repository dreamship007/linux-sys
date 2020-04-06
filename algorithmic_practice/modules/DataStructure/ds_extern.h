#ifndef __DS_EXTERN_H__
#define __DS_EXTERN_H__
#include "sys_tem.h"


#define YES			1			//是
#define NO          0			//否 

#define SUCCESS		1			//成功 
#define UNSUCCESS	0			//失败 
#define	INFEASIBLE	-1			//不可行

#ifndef _MATH_H_ 				//系统中已有此状态码定义，要避免冲突 
#define	OVERFLOW	-2			//堆栈上溢
#define UNDERFLOW	-3			//堆栈下溢
#endif 

#ifndef NULL
#define NULL ((void*)0)
#endif

/* 状态码识别类型 */
typedef int Status;

/*宏函数*/
//函数暂停一段时间
#define Wait(x)                                                                 \
            {                                                                   \
                double _Loop_Num_;                                              \
                for(_Loop_Num_=0.01; _Loop_Num_<=100000.0*x; _Loop_Num_+=0.01)  \
                    ;                                                           \
            }//设立一个空循环 
 
//摁Enter键继续 
#define PressEnter                                      \
                {                                       \
                    fflush(stdin);                      \
                    printf("Press Enter...");           \
                    getchar();                          \
                    fflush(stdin);                      \
                }















/* 外部函数声明 */
int data_structure_test(void);





#endif ///<__DS_EXTERN_H__

