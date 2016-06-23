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

#include "xsi.h"

struct XSI_INFO xsi_info;



int main(int argc, char **argv)
{
    xsi_init_design(argc, argv);
    xsi_register_info(&xsi_info);

    xsi_register_min_prec_unit(-12);
    work_m_00000000002481966833_3260197397_init();
    work_m_00000000001717158192_3343816423_init();
    work_m_00000000000651349828_3527808377_init();
    work_m_00000000000856159525_1277329626_init();
    work_m_00000000000031378034_2578606528_init();
    work_m_00000000003663706226_0370288541_init();
    work_m_00000000004134447467_2073120511_init();


    xsi_register_tops("work_m_00000000003663706226_0370288541");
    xsi_register_tops("work_m_00000000004134447467_2073120511");


    return xsi_run_simulation(argc, argv);

}
