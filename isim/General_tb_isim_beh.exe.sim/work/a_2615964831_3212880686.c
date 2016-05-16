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
static const char *ng0 = "C:/Users/Angela/Desktop/oscar/arquitectura/procesadorIII/Register_File.vhd";
extern char *IEEE_P_3620187407;

unsigned char ieee_p_3620187407_sub_4042748798_3965413181(char *, char *, char *, char *, char *);
int ieee_p_3620187407_sub_514432868_3965413181(char *, char *, char *);


static void work_a_2615964831_3212880686_p_0(char *t0)
{
    char t17[16];
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    unsigned char t9;
    char *t10;
    unsigned int t11;
    char *t12;
    int t13;
    int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned char t18;
    int t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;

LAB0:    xsi_set_current_line(27, ng0);
    t1 = (t0 + 6032);
    t3 = (32U != 32U);
    if (t3 == 1)
        goto LAB2;

LAB3:    t4 = (t0 + 2320);
    t5 = (t4 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    memcpy(t8, t1, 32U);
    xsi_driver_first_trans_delta(t4, 0U, 32U, 0LL);
    xsi_set_current_line(29, ng0);
    t1 = (t0 + 1052U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t9 = (t3 == (unsigned char)3);
    if (t9 != 0)
        goto LAB4;

LAB6:    xsi_set_current_line(35, ng0);
    t1 = (t0 + 1420U);
    t2 = *((char **)t1);
    t1 = (t0 + 592U);
    t4 = *((char **)t1);
    t1 = (t0 + 4548U);
    t13 = ieee_p_3620187407_sub_514432868_3965413181(IEEE_P_3620187407, t4, t1);
    t14 = (t13 - 0);
    t11 = (t14 * 1);
    xsi_vhdl_check_range_of_index(0, 39, 1, t13);
    t15 = (32U * t11);
    t16 = (0 + t15);
    t5 = (t2 + t16);
    t6 = (t0 + 2356);
    t7 = (t6 + 32U);
    t8 = *((char **)t7);
    t10 = (t8 + 40U);
    t12 = *((char **)t10);
    memcpy(t12, t5, 32U);
    xsi_driver_first_trans_fast_port(t6);
    xsi_set_current_line(36, ng0);
    t1 = (t0 + 1420U);
    t2 = *((char **)t1);
    t1 = (t0 + 684U);
    t4 = *((char **)t1);
    t1 = (t0 + 4564U);
    t13 = ieee_p_3620187407_sub_514432868_3965413181(IEEE_P_3620187407, t4, t1);
    t14 = (t13 - 0);
    t11 = (t14 * 1);
    xsi_vhdl_check_range_of_index(0, 39, 1, t13);
    t15 = (32U * t11);
    t16 = (0 + t15);
    t5 = (t2 + t16);
    t6 = (t0 + 2392);
    t7 = (t6 + 32U);
    t8 = *((char **)t7);
    t10 = (t8 + 40U);
    t12 = *((char **)t10);
    memcpy(t12, t5, 32U);
    xsi_driver_first_trans_fast_port(t6);
    xsi_set_current_line(37, ng0);
    t1 = (t0 + 1420U);
    t2 = *((char **)t1);
    t1 = (t0 + 776U);
    t4 = *((char **)t1);
    t1 = (t0 + 4580U);
    t13 = ieee_p_3620187407_sub_514432868_3965413181(IEEE_P_3620187407, t4, t1);
    t14 = (t13 - 0);
    t11 = (t14 * 1);
    xsi_vhdl_check_range_of_index(0, 39, 1, t13);
    t15 = (32U * t11);
    t16 = (0 + t15);
    t5 = (t2 + t16);
    t6 = (t0 + 2428);
    t7 = (t6 + 32U);
    t8 = *((char **)t7);
    t10 = (t8 + 40U);
    t12 = *((char **)t10);
    memcpy(t12, t5, 32U);
    xsi_driver_first_trans_fast_port(t6);
    xsi_set_current_line(38, ng0);
    t1 = (t0 + 960U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t9 = (t3 == (unsigned char)3);
    if (t9 != 0)
        goto LAB9;

LAB11:
LAB10:
LAB5:    t1 = (t0 + 2276);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_size_not_matching(32U, 32U, 0);
    goto LAB3;

LAB4:    xsi_set_current_line(30, ng0);
    t1 = xsi_get_transient_memory(32U);
    memset(t1, 0, 32U);
    t4 = t1;
    memset(t4, (unsigned char)2, 32U);
    t5 = (t0 + 2356);
    t6 = (t5 + 32U);
    t7 = *((char **)t6);
    t8 = (t7 + 40U);
    t10 = *((char **)t8);
    memcpy(t10, t1, 32U);
    xsi_driver_first_trans_fast_port(t5);
    xsi_set_current_line(31, ng0);
    t1 = xsi_get_transient_memory(32U);
    memset(t1, 0, 32U);
    t2 = t1;
    memset(t2, (unsigned char)2, 32U);
    t4 = (t0 + 2392);
    t5 = (t4 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    memcpy(t8, t1, 32U);
    xsi_driver_first_trans_fast_port(t4);
    xsi_set_current_line(32, ng0);
    t1 = xsi_get_transient_memory(32U);
    memset(t1, 0, 32U);
    t2 = t1;
    memset(t2, (unsigned char)2, 32U);
    t4 = (t0 + 2428);
    t5 = (t4 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    memcpy(t8, t1, 32U);
    xsi_driver_first_trans_fast_port(t4);
    xsi_set_current_line(33, ng0);
    t1 = xsi_get_transient_memory(1280U);
    memset(t1, 0, 1280U);
    t2 = t1;
    t4 = (t0 + 6064);
    t3 = (32U != 0);
    if (t3 == 1)
        goto LAB7;

LAB8:    t6 = (t0 + 2320);
    t7 = (t6 + 32U);
    t8 = *((char **)t7);
    t10 = (t8 + 40U);
    t12 = *((char **)t10);
    memcpy(t12, t1, 1280U);
    xsi_driver_first_trans_fast(t6);
    goto LAB5;

LAB7:    t11 = (1280U / 32U);
    xsi_mem_set_data(t2, t4, 32U, t11);
    goto LAB8;

LAB9:    xsi_set_current_line(40, ng0);
    t1 = (t0 + 776U);
    t4 = *((char **)t1);
    t1 = (t0 + 4580U);
    t5 = (t0 + 6096);
    t7 = (t17 + 0U);
    t8 = (t7 + 0U);
    *((int *)t8) = 0;
    t8 = (t7 + 4U);
    *((int *)t8) = 5;
    t8 = (t7 + 8U);
    *((int *)t8) = 1;
    t13 = (5 - 0);
    t11 = (t13 * 1);
    t11 = (t11 + 1);
    t8 = (t7 + 12U);
    *((unsigned int *)t8) = t11;
    t18 = ieee_p_3620187407_sub_4042748798_3965413181(IEEE_P_3620187407, t4, t1, t5, t17);
    if (t18 != 0)
        goto LAB12;

LAB14:    xsi_set_current_line(43, ng0);
    t1 = (t0 + 6102);
    t3 = (32U != 32U);
    if (t3 == 1)
        goto LAB15;

LAB16:    t4 = (t0 + 2320);
    t5 = (t4 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    memcpy(t8, t1, 32U);
    xsi_driver_first_trans_delta(t4, 0U, 32U, 0LL);

LAB13:    goto LAB10;

LAB12:    xsi_set_current_line(41, ng0);
    t8 = (t0 + 868U);
    t10 = *((char **)t8);
    t8 = (t0 + 776U);
    t12 = *((char **)t8);
    t8 = (t0 + 4580U);
    t14 = ieee_p_3620187407_sub_514432868_3965413181(IEEE_P_3620187407, t12, t8);
    t19 = (t14 - 0);
    t11 = (t19 * 1);
    t15 = (32U * t11);
    t16 = (0U + t15);
    t20 = (t0 + 2320);
    t21 = (t20 + 32U);
    t22 = *((char **)t21);
    t23 = (t22 + 40U);
    t24 = *((char **)t23);
    memcpy(t24, t10, 32U);
    xsi_driver_first_trans_delta(t20, t16, 32U, 0LL);
    goto LAB13;

LAB15:    xsi_size_not_matching(32U, 32U, 0);
    goto LAB16;

}


extern void work_a_2615964831_3212880686_init()
{
	static char *pe[] = {(void *)work_a_2615964831_3212880686_p_0};
	xsi_register_didat("work_a_2615964831_3212880686", "isim/General_tb_isim_beh.exe.sim/work/a_2615964831_3212880686.didat");
	xsi_register_executes(pe);
}
