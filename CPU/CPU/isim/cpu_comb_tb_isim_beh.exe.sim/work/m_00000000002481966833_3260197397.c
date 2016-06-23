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

/* This file is designed for use with ISim build 0x7708f090 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "C:/Users/ike/Desktop/ISE_workspace/CPU/op_decode.v";
static unsigned int ng1[] = {8U, 0U};
static unsigned int ng2[] = {3U, 0U};
static unsigned int ng3[] = {2U, 0U};
static int ng4[] = {1, 0};
static int ng5[] = {0, 0};
static unsigned int ng6[] = {11U, 0U};
static unsigned int ng7[] = {14U, 0U};



static void Always_32_0(char *t0)
{
    char t6[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;
    char *t17;

LAB0:    t1 = (t0 + 2848U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(32, ng0);
    t2 = (t0 + 3168);
    *((int *)t2) = 1;
    t3 = (t0 + 2880);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(32, ng0);

LAB5:    xsi_set_current_line(33, ng0);
    t4 = (t0 + 1048U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng1)));
    memset(t6, 0, 8);
    t7 = (t5 + 4);
    if (*((unsigned int *)t7) != 0)
        goto LAB7;

LAB6:    t8 = (t4 + 4);
    if (*((unsigned int *)t8) != 0)
        goto LAB7;

LAB10:    if (*((unsigned int *)t5) < *((unsigned int *)t4))
        goto LAB8;

LAB9:    t10 = (t6 + 4);
    t11 = *((unsigned int *)t10);
    t12 = (~(t11));
    t13 = *((unsigned int *)t6);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB11;

LAB12:    xsi_set_current_line(38, ng0);

LAB15:    xsi_set_current_line(39, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 1448);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);
    xsi_set_current_line(40, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(41, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng6)));
    memset(t6, 0, 8);
    t4 = (t3 + 4);
    if (*((unsigned int *)t4) != 0)
        goto LAB17;

LAB16:    t5 = (t2 + 4);
    if (*((unsigned int *)t5) != 0)
        goto LAB17;

LAB20:    if (*((unsigned int *)t3) < *((unsigned int *)t2))
        goto LAB18;

LAB19:    t8 = (t6 + 4);
    t11 = *((unsigned int *)t8);
    t12 = (~(t11));
    t13 = *((unsigned int *)t6);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB21;

LAB22:    xsi_set_current_line(42, ng0);

LAB24:    xsi_set_current_line(43, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1608);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);
    xsi_set_current_line(44, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng7)));
    memset(t6, 0, 8);
    t4 = (t3 + 4);
    if (*((unsigned int *)t4) != 0)
        goto LAB26;

LAB25:    t5 = (t2 + 4);
    if (*((unsigned int *)t5) != 0)
        goto LAB26;

LAB29:    if (*((unsigned int *)t3) < *((unsigned int *)t2))
        goto LAB27;

LAB28:    t8 = (t6 + 4);
    t11 = *((unsigned int *)t8);
    t12 = (~(t11));
    t13 = *((unsigned int *)t6);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB30;

LAB31:    xsi_set_current_line(45, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);

LAB32:
LAB23:
LAB13:    goto LAB2;

LAB7:    t9 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB9;

LAB8:    *((unsigned int *)t6) = 1;
    goto LAB9;

LAB11:    xsi_set_current_line(33, ng0);

LAB14:    xsi_set_current_line(34, ng0);
    t16 = (t0 + 1048U);
    t17 = *((char **)t16);
    t16 = (t0 + 1448);
    xsi_vlogvar_wait_assign_value(t16, t17, 0, 0, 3, 0LL);
    xsi_set_current_line(35, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1608);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);
    xsi_set_current_line(36, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);
    xsi_set_current_line(37, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB13;

LAB17:    t7 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB19;

LAB18:    *((unsigned int *)t6) = 1;
    goto LAB19;

LAB21:    xsi_set_current_line(41, ng0);
    t9 = (t0 + 1048U);
    t10 = *((char **)t9);
    t9 = (t0 + 1608);
    xsi_vlogvar_wait_assign_value(t9, t10, 0, 0, 2, 0LL);
    goto LAB23;

LAB26:    t7 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB28;

LAB27:    *((unsigned int *)t6) = 1;
    goto LAB28;

LAB30:    xsi_set_current_line(44, ng0);
    t9 = (t0 + 1048U);
    t10 = *((char **)t9);
    t9 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t9, t10, 0, 0, 2, 0LL);
    goto LAB32;

}


extern void work_m_00000000002481966833_3260197397_init()
{
	static char *pe[] = {(void *)Always_32_0};
	xsi_register_didat("work_m_00000000002481966833_3260197397", "isim/cpu_comb_tb_isim_beh.exe.sim/work/m_00000000002481966833_3260197397.didat");
	xsi_register_executes(pe);
}
