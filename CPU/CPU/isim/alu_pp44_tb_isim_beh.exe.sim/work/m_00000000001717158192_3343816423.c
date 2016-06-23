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
static const char *ng0 = "C:/Users/ike/Desktop/ISE_workspace/CPU/alu_pp44.v";
static int ng1[] = {1, 0};
static unsigned int ng2[] = {0U, 0U};
static unsigned int ng3[] = {1U, 0U};
static unsigned int ng4[] = {2U, 0U};
static unsigned int ng5[] = {3U, 0U};
static unsigned int ng6[] = {4U, 0U};
static unsigned int ng7[] = {5U, 0U};
static unsigned int ng8[] = {6U, 0U};
static unsigned int ng9[] = {7U, 0U};
static unsigned int ng10[] = {128U, 0U};
static int ng11[] = {0, 0};



static int sp_operate(char *t1, char *t2)
{
    char t7[8];
    char t40[8];
    int t0;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;
    char *t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    int t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    char *t39;
    char *t41;
    unsigned int t42;
    int t43;
    int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;

LAB0:    t0 = 1;
    xsi_set_current_line(37, ng0);

LAB2:    xsi_set_current_line(38, ng0);
    t3 = (t1 + 4072);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = ((char*)((ng1)));
    memset(t7, 0, 8);
    t8 = (t5 + 4);
    t9 = (t6 + 4);
    t10 = *((unsigned int *)t5);
    t11 = *((unsigned int *)t6);
    t12 = (t10 ^ t11);
    t13 = *((unsigned int *)t8);
    t14 = *((unsigned int *)t9);
    t15 = (t13 ^ t14);
    t16 = (t12 | t15);
    t17 = *((unsigned int *)t8);
    t18 = *((unsigned int *)t9);
    t19 = (t17 | t18);
    t20 = (~(t19));
    t21 = (t16 & t20);
    if (t21 != 0)
        goto LAB6;

LAB3:    if (t19 != 0)
        goto LAB5;

LAB4:    *((unsigned int *)t7) = 1;

LAB6:    t23 = (t7 + 4);
    t24 = *((unsigned int *)t23);
    t25 = (~(t24));
    t26 = *((unsigned int *)t7);
    t27 = (t26 & t25);
    t28 = (t27 != 0);
    if (t28 > 0)
        goto LAB7;

LAB8:    xsi_set_current_line(50, ng0);
    t3 = (t1 + 3432);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t1 + 3272);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 8);

LAB9:    t0 = 0;

LAB1:    return t0;
LAB5:    t22 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t22) = 1;
    goto LAB6;

LAB7:    xsi_set_current_line(38, ng0);

LAB10:    xsi_set_current_line(39, ng0);
    t29 = (t1 + 3752);
    t30 = (t29 + 56U);
    t31 = *((char **)t30);

LAB11:    t32 = ((char*)((ng2)));
    t33 = xsi_vlog_unsigned_case_compare(t31, 3, t32, 3);
    if (t33 == 1)
        goto LAB12;

LAB13:    t3 = ((char*)((ng3)));
    t33 = xsi_vlog_unsigned_case_compare(t31, 3, t3, 3);
    if (t33 == 1)
        goto LAB14;

LAB15:    t3 = ((char*)((ng4)));
    t33 = xsi_vlog_unsigned_case_compare(t31, 3, t3, 3);
    if (t33 == 1)
        goto LAB16;

LAB17:    t3 = ((char*)((ng5)));
    t33 = xsi_vlog_unsigned_case_compare(t31, 3, t3, 3);
    if (t33 == 1)
        goto LAB18;

LAB19:    t3 = ((char*)((ng6)));
    t33 = xsi_vlog_unsigned_case_compare(t31, 3, t3, 3);
    if (t33 == 1)
        goto LAB20;

LAB21:    t3 = ((char*)((ng7)));
    t33 = xsi_vlog_unsigned_case_compare(t31, 3, t3, 3);
    if (t33 == 1)
        goto LAB22;

LAB23:    t3 = ((char*)((ng8)));
    t33 = xsi_vlog_unsigned_case_compare(t31, 3, t3, 3);
    if (t33 == 1)
        goto LAB24;

LAB25:    t3 = ((char*)((ng9)));
    t33 = xsi_vlog_unsigned_case_compare(t31, 3, t3, 3);
    if (t33 == 1)
        goto LAB26;

LAB27:
LAB28:    goto LAB9;

LAB12:    xsi_set_current_line(40, ng0);
    t34 = (t1 + 3432);
    t35 = (t34 + 56U);
    t36 = *((char **)t35);
    t37 = (t1 + 3592);
    t38 = (t37 + 56U);
    t39 = *((char **)t38);
    memset(t40, 0, 8);
    xsi_vlog_unsigned_add(t40, 8, t36, 8, t39, 8);
    t41 = (t1 + 3272);
    xsi_vlogvar_assign_value(t41, t40, 0, 0, 8);
    goto LAB28;

LAB14:    xsi_set_current_line(41, ng0);
    t4 = (t1 + 3432);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t8 = (t1 + 3592);
    t9 = (t8 + 56U);
    t22 = *((char **)t9);
    memset(t7, 0, 8);
    xsi_vlog_unsigned_add(t7, 8, t6, 8, t22, 8);
    t23 = (t1 + 3912);
    t29 = (t23 + 56U);
    t30 = *((char **)t29);
    memset(t40, 0, 8);
    xsi_vlog_unsigned_add(t40, 8, t7, 8, t30, 1);
    t32 = (t1 + 3272);
    xsi_vlogvar_assign_value(t32, t40, 0, 0, 8);
    goto LAB28;

LAB16:    xsi_set_current_line(42, ng0);
    t4 = (t1 + 3432);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t8 = (t1 + 3592);
    t9 = (t8 + 56U);
    t22 = *((char **)t9);
    memset(t7, 0, 8);
    xsi_vlog_unsigned_minus(t7, 8, t6, 8, t22, 8);
    t23 = (t1 + 3272);
    xsi_vlogvar_assign_value(t23, t7, 0, 0, 8);
    goto LAB28;

LAB18:    xsi_set_current_line(43, ng0);
    t4 = (t1 + 3432);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t8 = (t1 + 3592);
    t9 = (t8 + 56U);
    t22 = *((char **)t9);
    memset(t7, 0, 8);
    xsi_vlog_unsigned_multiply(t7, 8, t6, 8, t22, 8);
    t23 = (t1 + 3272);
    xsi_vlogvar_assign_value(t23, t7, 0, 0, 8);
    goto LAB28;

LAB20:    xsi_set_current_line(44, ng0);
    t4 = (t1 + 3432);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t8 = (t1 + 3592);
    t9 = (t8 + 56U);
    t22 = *((char **)t9);
    t10 = *((unsigned int *)t6);
    t11 = *((unsigned int *)t22);
    t12 = (t10 & t11);
    *((unsigned int *)t7) = t12;
    t23 = (t6 + 4);
    t29 = (t22 + 4);
    t30 = (t7 + 4);
    t13 = *((unsigned int *)t23);
    t14 = *((unsigned int *)t29);
    t15 = (t13 | t14);
    *((unsigned int *)t30) = t15;
    t16 = *((unsigned int *)t30);
    t17 = (t16 != 0);
    if (t17 == 1)
        goto LAB29;

LAB30:
LAB31:    t35 = (t1 + 3272);
    xsi_vlogvar_assign_value(t35, t7, 0, 0, 8);
    goto LAB28;

LAB22:    xsi_set_current_line(45, ng0);
    t4 = (t1 + 3432);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t8 = (t1 + 3592);
    t9 = (t8 + 56U);
    t22 = *((char **)t9);
    t10 = *((unsigned int *)t6);
    t11 = *((unsigned int *)t22);
    t12 = (t10 | t11);
    *((unsigned int *)t7) = t12;
    t23 = (t6 + 4);
    t29 = (t22 + 4);
    t30 = (t7 + 4);
    t13 = *((unsigned int *)t23);
    t14 = *((unsigned int *)t29);
    t15 = (t13 | t14);
    *((unsigned int *)t30) = t15;
    t16 = *((unsigned int *)t30);
    t17 = (t16 != 0);
    if (t17 == 1)
        goto LAB32;

LAB33:
LAB34:    t35 = (t1 + 3272);
    xsi_vlogvar_assign_value(t35, t7, 0, 0, 8);
    goto LAB28;

LAB24:    xsi_set_current_line(46, ng0);
    t4 = (t1 + 3432);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memset(t7, 0, 8);
    t8 = (t7 + 4);
    t9 = (t6 + 4);
    t10 = *((unsigned int *)t6);
    t11 = (~(t10));
    *((unsigned int *)t7) = t11;
    *((unsigned int *)t8) = 0;
    if (*((unsigned int *)t9) != 0)
        goto LAB36;

LAB35:    t16 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t16 & 255U);
    t17 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t17 & 255U);
    t22 = (t1 + 3272);
    xsi_vlogvar_assign_value(t22, t7, 0, 0, 8);
    goto LAB28;

LAB26:    xsi_set_current_line(47, ng0);
    t4 = (t1 + 3432);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t8 = (t1 + 3592);
    t9 = (t8 + 56U);
    t22 = *((char **)t9);
    t10 = *((unsigned int *)t6);
    t11 = *((unsigned int *)t22);
    t12 = (t10 ^ t11);
    *((unsigned int *)t7) = t12;
    t23 = (t6 + 4);
    t29 = (t22 + 4);
    t30 = (t7 + 4);
    t13 = *((unsigned int *)t23);
    t14 = *((unsigned int *)t29);
    t15 = (t13 | t14);
    *((unsigned int *)t30) = t15;
    t16 = *((unsigned int *)t30);
    t17 = (t16 != 0);
    if (t17 == 1)
        goto LAB37;

LAB38:
LAB39:    t32 = (t1 + 3272);
    xsi_vlogvar_assign_value(t32, t7, 0, 0, 8);
    goto LAB28;

LAB29:    t18 = *((unsigned int *)t7);
    t19 = *((unsigned int *)t30);
    *((unsigned int *)t7) = (t18 | t19);
    t32 = (t6 + 4);
    t34 = (t22 + 4);
    t20 = *((unsigned int *)t6);
    t21 = (~(t20));
    t24 = *((unsigned int *)t32);
    t25 = (~(t24));
    t26 = *((unsigned int *)t22);
    t27 = (~(t26));
    t28 = *((unsigned int *)t34);
    t42 = (~(t28));
    t43 = (t21 & t25);
    t44 = (t27 & t42);
    t45 = (~(t43));
    t46 = (~(t44));
    t47 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t47 & t45);
    t48 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t48 & t46);
    t49 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t49 & t45);
    t50 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t50 & t46);
    goto LAB31;

LAB32:    t18 = *((unsigned int *)t7);
    t19 = *((unsigned int *)t30);
    *((unsigned int *)t7) = (t18 | t19);
    t32 = (t6 + 4);
    t34 = (t22 + 4);
    t20 = *((unsigned int *)t32);
    t21 = (~(t20));
    t24 = *((unsigned int *)t6);
    t43 = (t24 & t21);
    t25 = *((unsigned int *)t34);
    t26 = (~(t25));
    t27 = *((unsigned int *)t22);
    t44 = (t27 & t26);
    t28 = (~(t43));
    t42 = (~(t44));
    t45 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t45 & t28);
    t46 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t46 & t42);
    goto LAB34;

LAB36:    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t9);
    *((unsigned int *)t7) = (t12 | t13);
    t14 = *((unsigned int *)t8);
    t15 = *((unsigned int *)t9);
    *((unsigned int *)t8) = (t14 | t15);
    goto LAB35;

LAB37:    t18 = *((unsigned int *)t7);
    t19 = *((unsigned int *)t30);
    *((unsigned int *)t7) = (t18 | t19);
    goto LAB39;

}

static int sp_carry(char *t1, char *t2)
{
    char t7[8];
    char t29[8];
    char t30[8];
    char t37[8];
    char t41[8];
    char t43[8];
    int t0;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;
    char *t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t38;
    char *t39;
    char *t40;
    char *t42;
    char *t44;
    char *t45;
    char *t46;
    char *t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    char *t53;
    char *t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    char *t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    char *t63;
    char *t64;

LAB0:    t0 = 1;
    xsi_set_current_line(59, ng0);

LAB2:    xsi_set_current_line(60, ng0);
    t3 = (t1 + 4872);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = ((char*)((ng3)));
    memset(t7, 0, 8);
    t8 = (t5 + 4);
    t9 = (t6 + 4);
    t10 = *((unsigned int *)t5);
    t11 = *((unsigned int *)t6);
    t12 = (t10 ^ t11);
    t13 = *((unsigned int *)t8);
    t14 = *((unsigned int *)t9);
    t15 = (t13 ^ t14);
    t16 = (t12 | t15);
    t17 = *((unsigned int *)t8);
    t18 = *((unsigned int *)t9);
    t19 = (t17 | t18);
    t20 = (~(t19));
    t21 = (t16 & t20);
    if (t21 != 0)
        goto LAB6;

LAB3:    if (t19 != 0)
        goto LAB5;

LAB4:    *((unsigned int *)t7) = 1;

LAB6:    t23 = (t7 + 4);
    t24 = *((unsigned int *)t23);
    t25 = (~(t24));
    t26 = *((unsigned int *)t7);
    t27 = (t26 & t25);
    t28 = (t27 != 0);
    if (t28 > 0)
        goto LAB7;

LAB8:
LAB9:    t0 = 0;

LAB1:    return t0;
LAB5:    t22 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t22) = 1;
    goto LAB6;

LAB7:    xsi_set_current_line(60, ng0);
    t31 = (t1 + 4392);
    t32 = (t31 + 56U);
    t33 = *((char **)t32);
    t34 = (t1 + 4552);
    t35 = (t34 + 56U);
    t36 = *((char **)t35);
    memset(t37, 0, 8);
    xsi_vlog_unsigned_add(t37, 8, t33, 8, t36, 8);
    t38 = (t1 + 4712);
    t39 = (t38 + 56U);
    t40 = *((char **)t39);
    memset(t41, 0, 8);
    xsi_vlog_unsigned_add(t41, 8, t37, 8, t40, 1);
    t42 = ((char*)((ng10)));
    memset(t43, 0, 8);
    t44 = (t41 + 4);
    if (*((unsigned int *)t44) != 0)
        goto LAB11;

LAB10:    t45 = (t42 + 4);
    if (*((unsigned int *)t45) != 0)
        goto LAB11;

LAB14:    if (*((unsigned int *)t41) > *((unsigned int *)t42))
        goto LAB12;

LAB13:    memset(t30, 0, 8);
    t47 = (t43 + 4);
    t48 = *((unsigned int *)t47);
    t49 = (~(t48));
    t50 = *((unsigned int *)t43);
    t51 = (t50 & t49);
    t52 = (t51 & 1U);
    if (t52 != 0)
        goto LAB15;

LAB16:    if (*((unsigned int *)t47) != 0)
        goto LAB17;

LAB18:    t54 = (t30 + 4);
    t55 = *((unsigned int *)t30);
    t56 = *((unsigned int *)t54);
    t57 = (t55 || t56);
    if (t57 > 0)
        goto LAB19;

LAB20:    t59 = *((unsigned int *)t30);
    t60 = (~(t59));
    t61 = *((unsigned int *)t54);
    t62 = (t60 || t61);
    if (t62 > 0)
        goto LAB21;

LAB22:    if (*((unsigned int *)t54) > 0)
        goto LAB23;

LAB24:    if (*((unsigned int *)t30) > 0)
        goto LAB25;

LAB26:    memcpy(t29, t63, 8);

LAB27:    t64 = (t1 + 4232);
    xsi_vlogvar_assign_value(t64, t29, 0, 0, 1);
    goto LAB9;

LAB11:    t46 = (t43 + 4);
    *((unsigned int *)t43) = 1;
    *((unsigned int *)t46) = 1;
    goto LAB13;

LAB12:    *((unsigned int *)t43) = 1;
    goto LAB13;

LAB15:    *((unsigned int *)t30) = 1;
    goto LAB18;

LAB17:    t53 = (t30 + 4);
    *((unsigned int *)t30) = 1;
    *((unsigned int *)t53) = 1;
    goto LAB18;

LAB19:    t58 = ((char*)((ng11)));
    goto LAB20;

LAB21:    t63 = ((char*)((ng1)));
    goto LAB22;

LAB23:    xsi_vlog_unsigned_bit_combine(t29, 32, t58, 32, t63, 32);
    goto LAB27;

LAB25:    memcpy(t29, t58, 8);
    goto LAB27;

}

static void Cont_64_0(char *t0)
{
    char t27[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    int t23;
    char *t24;
    char *t25;
    char *t26;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    unsigned int t36;
    unsigned int t37;
    char *t38;
    unsigned int t39;
    unsigned int t40;
    char *t41;
    unsigned int t42;
    unsigned int t43;
    char *t44;

LAB0:    t1 = (t0 + 5792U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(64, ng0);
    t2 = (t0 + 1912U);
    t3 = *((char **)t2);
    t2 = (t0 + 2072U);
    t4 = *((char **)t2);
    t2 = (t0 + 2392U);
    t5 = *((char **)t2);
    t2 = (t0 + 2232U);
    t6 = *((char **)t2);
    t2 = (t0 + 2552U);
    t7 = *((char **)t2);
    t2 = (t0 + 5600);
    t8 = (t0 + 848);
    t9 = xsi_create_subprogram_invocation(t2, 0, t0, t8, 0, 0);
    t10 = (t0 + 3432);
    xsi_vlogvar_assign_value(t10, t3, 0, 0, 8);
    t11 = (t0 + 3592);
    xsi_vlogvar_assign_value(t11, t4, 0, 0, 8);
    t12 = (t0 + 3752);
    xsi_vlogvar_assign_value(t12, t5, 0, 0, 3);
    t13 = (t0 + 3912);
    xsi_vlogvar_assign_value(t13, t6, 0, 0, 1);
    t14 = (t0 + 4072);
    xsi_vlogvar_assign_value(t14, t7, 0, 0, 1);

LAB4:    t15 = (t0 + 5696);
    t16 = *((char **)t15);
    t17 = (t16 + 80U);
    t18 = *((char **)t17);
    t19 = (t18 + 272U);
    t20 = *((char **)t19);
    t21 = (t20 + 0U);
    t22 = *((char **)t21);
    t23 = ((int  (*)(char *, char *))t22)(t0, t16);
    if (t23 != 0)
        goto LAB6;

LAB5:    t16 = (t0 + 5696);
    t24 = *((char **)t16);
    t16 = (t0 + 3272);
    t25 = (t16 + 56U);
    t26 = *((char **)t25);
    memcpy(t27, t26, 8);
    t28 = (t0 + 848);
    t29 = (t0 + 5600);
    t30 = 0;
    xsi_delete_subprogram_invocation(t28, t24, t0, t29, t30);
    t31 = (t0 + 6456);
    t32 = (t31 + 56U);
    t33 = *((char **)t32);
    t34 = (t33 + 56U);
    t35 = *((char **)t34);
    memset(t35, 0, 8);
    t36 = 255U;
    t37 = t36;
    t38 = (t27 + 4);
    t39 = *((unsigned int *)t27);
    t36 = (t36 & t39);
    t40 = *((unsigned int *)t38);
    t37 = (t37 & t40);
    t41 = (t35 + 4);
    t42 = *((unsigned int *)t35);
    *((unsigned int *)t35) = (t42 | t36);
    t43 = *((unsigned int *)t41);
    *((unsigned int *)t41) = (t43 | t37);
    xsi_driver_vfirst_trans(t31, 0, 7);
    t44 = (t0 + 6360);
    *((int *)t44) = 1;

LAB1:    return;
LAB6:    t15 = (t0 + 5792U);
    *((char **)t15) = &&LAB4;
    goto LAB1;

}

static void Cont_65_1(char *t0)
{
    char t25[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    int t21;
    char *t22;
    char *t23;
    char *t24;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    unsigned int t34;
    unsigned int t35;
    char *t36;
    unsigned int t37;
    unsigned int t38;
    char *t39;
    unsigned int t40;
    unsigned int t41;
    char *t42;

LAB0:    t1 = (t0 + 6040U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(65, ng0);
    t2 = (t0 + 1912U);
    t3 = *((char **)t2);
    t2 = (t0 + 2072U);
    t4 = *((char **)t2);
    t2 = (t0 + 2232U);
    t5 = *((char **)t2);
    t2 = (t0 + 2392U);
    t6 = *((char **)t2);
    t2 = (t0 + 5848);
    t7 = (t0 + 1280);
    t8 = xsi_create_subprogram_invocation(t2, 0, t0, t7, 0, 0);
    t9 = (t0 + 4392);
    xsi_vlogvar_assign_value(t9, t3, 0, 0, 8);
    t10 = (t0 + 4552);
    xsi_vlogvar_assign_value(t10, t4, 0, 0, 8);
    t11 = (t0 + 4712);
    xsi_vlogvar_assign_value(t11, t5, 0, 0, 1);
    t12 = (t0 + 4872);
    xsi_vlogvar_assign_value(t12, t6, 0, 0, 3);

LAB4:    t13 = (t0 + 5944);
    t14 = *((char **)t13);
    t15 = (t14 + 80U);
    t16 = *((char **)t15);
    t17 = (t16 + 272U);
    t18 = *((char **)t17);
    t19 = (t18 + 0U);
    t20 = *((char **)t19);
    t21 = ((int  (*)(char *, char *))t20)(t0, t14);
    if (t21 != 0)
        goto LAB6;

LAB5:    t14 = (t0 + 5944);
    t22 = *((char **)t14);
    t14 = (t0 + 4232);
    t23 = (t14 + 56U);
    t24 = *((char **)t23);
    memcpy(t25, t24, 8);
    t26 = (t0 + 1280);
    t27 = (t0 + 5848);
    t28 = 0;
    xsi_delete_subprogram_invocation(t26, t22, t0, t27, t28);
    t29 = (t0 + 6520);
    t30 = (t29 + 56U);
    t31 = *((char **)t30);
    t32 = (t31 + 56U);
    t33 = *((char **)t32);
    memset(t33, 0, 8);
    t34 = 1U;
    t35 = t34;
    t36 = (t25 + 4);
    t37 = *((unsigned int *)t25);
    t34 = (t34 & t37);
    t38 = *((unsigned int *)t36);
    t35 = (t35 & t38);
    t39 = (t33 + 4);
    t40 = *((unsigned int *)t33);
    *((unsigned int *)t33) = (t40 | t34);
    t41 = *((unsigned int *)t39);
    *((unsigned int *)t39) = (t41 | t35);
    xsi_driver_vfirst_trans(t29, 0, 0);
    t42 = (t0 + 6376);
    *((int *)t42) = 1;

LAB1:    return;
LAB6:    t13 = (t0 + 6040U);
    *((char **)t13) = &&LAB4;
    goto LAB1;

}


extern void work_m_00000000001717158192_3343816423_init()
{
	static char *pe[] = {(void *)Cont_64_0,(void *)Cont_65_1};
	static char *se[] = {(void *)sp_operate,(void *)sp_carry};
	xsi_register_didat("work_m_00000000001717158192_3343816423", "isim/alu_pp44_tb_isim_beh.exe.sim/work/m_00000000001717158192_3343816423.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}
