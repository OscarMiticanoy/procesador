/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0x8ef4fb42 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "C:/Users/Angela/Desktop/oscar/arquitectura/procesadorIII/SEU.vhd";



static void work_a_0992986323_3212880686_p_0(char *t0)
{
    char *t1;
    char *t2;
    int t3;
    unsigned int t4;
    unsigned int t5;
    unsigned int t6;
    unsigned char t7;
    unsigned char t8;
    char *t9;
    char *t10;
    unsigned char t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;

LAB0:    xsi_set_current_line(19, ng0);
    t1 = (t0 + 592U);
    t2 = *((char **)t1);
    t3 = (12 - 12);
    t4 = (t3 * -1);
    t5 = (1U * t4);
    t6 = (0 + t5);
    t1 = (t2 + t6);
    t7 = *((unsigned char *)t1);
    t8 = (t7 == (unsigned char)3);
    if (t8 != 0)
        goto LAB2;

LAB4:    xsi_set_current_line(23, ng0);
    t1 = (t0 + 2804);
    t7 = (19U != 19U);
    if (t7 == 1)
        goto LAB7;

LAB8:    t9 = (t0 + 1584);
    t10 = (t9 + 32U);
    t12 = *((char **)t10);
    t13 = (t12 + 40U);
    t14 = *((char **)t13);
    memcpy(t14, t1, 19U);
    xsi_driver_first_trans_delta(t9, 0U, 19U, 0LL);
    xsi_set_current_line(24, ng0);
    t1 = (t0 + 592U);
    t2 = *((char **)t1);
    t1 = (t0 + 1584);
    t9 = (t1 + 32U);
    t10 = *((char **)t9);
    t12 = (t10 + 40U);
    t13 = *((char **)t12);
    memcpy(t13, t2, 13U);
    xsi_driver_first_trans_delta(t1, 19U, 13U, 0LL);

LAB3:    t1 = (t0 + 1540);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(20, ng0);
    t9 = (t0 + 2785);
    t11 = (19U != 19U);
    if (t11 == 1)
        goto LAB5;

LAB6:    t12 = (t0 + 1584);
    t13 = (t12 + 32U);
    t14 = *((char **)t13);
    t15 = (t14 + 40U);
    t16 = *((char **)t15);
    memcpy(t16, t9, 19U);
    xsi_driver_first_trans_delta(t12, 0U, 19U, 0LL);
    xsi_set_current_line(21, ng0);
    t1 = (t0 + 592U);
    t2 = *((char **)t1);
    t1 = (t0 + 1584);
    t9 = (t1 + 32U);
    t10 = *((char **)t9);
    t12 = (t10 + 40U);
    t13 = *((char **)t12);
    memcpy(t13, t2, 13U);
    xsi_driver_first_trans_delta(t1, 19U, 13U, 0LL);
    goto LAB3;

LAB5:    xsi_size_not_matching(19U, 19U, 0);
    goto LAB6;

LAB7:    xsi_size_not_matching(19U, 19U, 0);
    goto LAB8;

}


extern void work_a_0992986323_3212880686_init()
{
	static char *pe[] = {(void *)work_a_0992986323_3212880686_p_0};
	xsi_register_didat("work_a_0992986323_3212880686", "isim/General_isim_beh.exe.sim/work/a_0992986323_3212880686.didat");
	xsi_register_executes(pe);
}
