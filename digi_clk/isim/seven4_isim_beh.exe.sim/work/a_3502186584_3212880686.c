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

/* This file is designed for use with ISim build 0x6dd86d03 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "D:/digi/digi_clk/mo.vhd";
extern char *IEEE_P_2592010699;

unsigned char ieee_p_2592010699_sub_1690584930_503743352(char *, unsigned char );
unsigned char ieee_p_2592010699_sub_1744673427_503743352(char *, char *, unsigned int , unsigned int );


static void work_a_3502186584_3212880686_p_0(char *t0)
{
    char *t1;
    unsigned char t2;
    char *t3;
    char *t4;
    int t5;
    int t6;
    char *t7;
    unsigned char t8;
    char *t9;
    char *t10;

LAB0:    xsi_set_current_line(74, ng0);
    t1 = (t0 + 568U);
    t2 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t2 != 0)
        goto LAB2;

LAB4:
LAB3:    t1 = (t0 + 2800);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(75, ng0);
    t3 = (t0 + 1224U);
    t4 = *((char **)t3);
    t5 = *((int *)t4);
    t6 = (t5 + 1);
    t3 = (t0 + 1224U);
    t7 = *((char **)t3);
    t3 = (t7 + 0);
    *((int *)t3) = t6;
    xsi_set_current_line(76, ng0);
    t1 = (t0 + 1292U);
    t3 = *((char **)t1);
    t5 = *((int *)t3);
    t6 = (t5 + 1);
    t1 = (t0 + 1292U);
    t4 = *((char **)t1);
    t1 = (t4 + 0);
    *((int *)t1) = t6;
    xsi_set_current_line(77, ng0);
    t1 = (t0 + 1224U);
    t3 = *((char **)t1);
    t5 = *((int *)t3);
    t2 = (t5 == 2000000);
    if (t2 != 0)
        goto LAB5;

LAB7:
LAB6:    xsi_set_current_line(81, ng0);
    t1 = (t0 + 1292U);
    t3 = *((char **)t1);
    t5 = *((int *)t3);
    t2 = (t5 == 2000);
    if (t2 != 0)
        goto LAB8;

LAB10:
LAB9:    goto LAB3;

LAB5:    xsi_set_current_line(78, ng0);
    t1 = (t0 + 1224U);
    t4 = *((char **)t1);
    t1 = (t4 + 0);
    *((int *)t1) = 0;
    xsi_set_current_line(79, ng0);
    t1 = (t0 + 960U);
    t3 = *((char **)t1);
    t2 = *((unsigned char *)t3);
    t8 = ieee_p_2592010699_sub_1690584930_503743352(IEEE_P_2592010699, t2);
    t1 = (t0 + 2852);
    t4 = (t1 + 32U);
    t7 = *((char **)t4);
    t9 = (t7 + 40U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = t8;
    xsi_driver_first_trans_fast(t1);
    goto LAB6;

LAB8:    xsi_set_current_line(82, ng0);
    t1 = (t0 + 1292U);
    t4 = *((char **)t1);
    t1 = (t4 + 0);
    *((int *)t1) = 0;
    xsi_set_current_line(83, ng0);
    t1 = (t0 + 1052U);
    t3 = *((char **)t1);
    t2 = *((unsigned char *)t3);
    t8 = ieee_p_2592010699_sub_1690584930_503743352(IEEE_P_2592010699, t2);
    t1 = (t0 + 2888);
    t4 = (t1 + 32U);
    t7 = *((char **)t4);
    t9 = (t7 + 40U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = t8;
    xsi_driver_first_trans_fast(t1);
    goto LAB9;

}

static void work_a_3502186584_3212880686_p_1(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    int t6;
    int t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;

LAB0:    xsi_set_current_line(95, ng0);
    t1 = (t0 + 684U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB2;

LAB4:    xsi_set_current_line(103, ng0);
    t1 = (t0 + 936U);
    t3 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t3 != 0)
        goto LAB5;

LAB7:
LAB6:
LAB3:    xsi_set_current_line(135, ng0);
    t1 = (t0 + 1028U);
    t3 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t3 != 0)
        goto LAB20;

LAB22:
LAB21:    t1 = (t0 + 2808);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(98, ng0);
    t1 = (t0 + 1360U);
    t5 = *((char **)t1);
    t1 = (t5 + 0);
    *((int *)t1) = 0;
    xsi_set_current_line(99, ng0);
    t1 = (t0 + 1428U);
    t2 = *((char **)t1);
    t1 = (t2 + 0);
    *((int *)t1) = 0;
    xsi_set_current_line(100, ng0);
    t1 = (t0 + 1496U);
    t2 = *((char **)t1);
    t1 = (t2 + 0);
    *((int *)t1) = 0;
    xsi_set_current_line(101, ng0);
    t1 = (t0 + 1564U);
    t2 = *((char **)t1);
    t1 = (t2 + 0);
    *((int *)t1) = 0;
    goto LAB3;

LAB5:    xsi_set_current_line(104, ng0);
    t2 = (t0 + 1360U);
    t5 = *((char **)t2);
    t6 = *((int *)t5);
    t7 = (t6 + 1);
    t2 = (t0 + 1360U);
    t8 = *((char **)t2);
    t2 = (t8 + 0);
    *((int *)t2) = t7;
    xsi_set_current_line(105, ng0);
    t1 = (t0 + 1360U);
    t2 = *((char **)t1);
    t6 = *((int *)t2);
    t3 = (t6 == 10);
    if (t3 != 0)
        goto LAB8;

LAB10:
LAB9:    goto LAB6;

LAB8:    xsi_set_current_line(106, ng0);
    t1 = (t0 + 1360U);
    t5 = *((char **)t1);
    t1 = (t5 + 0);
    *((int *)t1) = 0;
    xsi_set_current_line(107, ng0);
    t1 = (t0 + 1428U);
    t2 = *((char **)t1);
    t6 = *((int *)t2);
    t7 = (t6 + 1);
    t1 = (t0 + 1428U);
    t5 = *((char **)t1);
    t1 = (t5 + 0);
    *((int *)t1) = t7;
    xsi_set_current_line(108, ng0);
    t1 = (t0 + 1428U);
    t2 = *((char **)t1);
    t6 = *((int *)t2);
    t3 = (t6 == 6);
    if (t3 != 0)
        goto LAB11;

LAB13:
LAB12:    goto LAB9;

LAB11:    xsi_set_current_line(109, ng0);
    t1 = (t0 + 1428U);
    t5 = *((char **)t1);
    t1 = (t5 + 0);
    *((int *)t1) = 0;
    xsi_set_current_line(111, ng0);
    t1 = (t0 + 1496U);
    t2 = *((char **)t1);
    t6 = *((int *)t2);
    t7 = (t6 + 1);
    t1 = (t0 + 1496U);
    t5 = *((char **)t1);
    t1 = (t5 + 0);
    *((int *)t1) = t7;
    xsi_set_current_line(112, ng0);
    t1 = (t0 + 1496U);
    t2 = *((char **)t1);
    t6 = *((int *)t2);
    t3 = (t6 == 10);
    if (t3 != 0)
        goto LAB14;

LAB16:
LAB15:    goto LAB12;

LAB14:    xsi_set_current_line(113, ng0);
    t1 = (t0 + 1496U);
    t5 = *((char **)t1);
    t1 = (t5 + 0);
    *((int *)t1) = 0;
    xsi_set_current_line(114, ng0);
    t1 = (t0 + 1564U);
    t2 = *((char **)t1);
    t6 = *((int *)t2);
    t7 = (t6 + 1);
    t1 = (t0 + 1564U);
    t5 = *((char **)t1);
    t1 = (t5 + 0);
    *((int *)t1) = t7;
    xsi_set_current_line(115, ng0);
    t1 = (t0 + 1564U);
    t2 = *((char **)t1);
    t6 = *((int *)t2);
    t3 = (t6 == 6);
    if (t3 != 0)
        goto LAB17;

LAB19:
LAB18:    goto LAB15;

LAB17:    xsi_set_current_line(116, ng0);
    t1 = (t0 + 1564U);
    t5 = *((char **)t1);
    t1 = (t5 + 0);
    *((int *)t1) = 0;
    goto LAB18;

LAB20:    xsi_set_current_line(136, ng0);
    t2 = (t0 + 1632U);
    t5 = *((char **)t2);
    t6 = *((int *)t5);
    t4 = (t6 == 0);
    if (t4 != 0)
        goto LAB23;

LAB25:    t1 = (t0 + 1632U);
    t2 = *((char **)t1);
    t6 = *((int *)t2);
    t3 = (t6 == 1);
    if (t3 != 0)
        goto LAB49;

LAB50:    t1 = (t0 + 1632U);
    t2 = *((char **)t1);
    t6 = *((int *)t2);
    t3 = (t6 == 2);
    if (t3 != 0)
        goto LAB74;

LAB75:    xsi_set_current_line(188, ng0);
    t1 = (t0 + 5066);
    t5 = (t0 + 2924);
    t8 = (t5 + 32U);
    t9 = *((char **)t8);
    t10 = (t9 + 40U);
    t11 = *((char **)t10);
    memcpy(t11, t1, 4U);
    xsi_driver_first_trans_fast_port(t5);
    xsi_set_current_line(189, ng0);
    t1 = (t0 + 1564U);
    t2 = *((char **)t1);
    t6 = *((int *)t2);
    if (t6 == 0)
        goto LAB100;

LAB111:    if (t6 == 1)
        goto LAB101;

LAB112:    if (t6 == 2)
        goto LAB102;

LAB113:    if (t6 == 3)
        goto LAB103;

LAB114:    if (t6 == 4)
        goto LAB104;

LAB115:    if (t6 == 5)
        goto LAB105;

LAB116:    if (t6 == 6)
        goto LAB106;

LAB117:    if (t6 == 7)
        goto LAB107;

LAB118:    if (t6 == 8)
        goto LAB108;

LAB119:    if (t6 == 9)
        goto LAB109;

LAB120:
LAB110:    xsi_set_current_line(200, ng0);

LAB99:    xsi_set_current_line(202, ng0);
    t1 = (t0 + 1904U);
    t2 = *((char **)t1);
    t1 = (t0 + 2960);
    t5 = (t1 + 32U);
    t8 = *((char **)t5);
    t9 = (t8 + 40U);
    t10 = *((char **)t9);
    memcpy(t10, t2, 7U);
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(203, ng0);
    t1 = (t0 + 1632U);
    t2 = *((char **)t1);
    t1 = (t2 + 0);
    *((int *)t1) = 0;

LAB24:    goto LAB21;

LAB23:    xsi_set_current_line(137, ng0);
    t2 = (t0 + 4844);
    t9 = (t0 + 2924);
    t10 = (t9 + 32U);
    t11 = *((char **)t10);
    t12 = (t11 + 40U);
    t13 = *((char **)t12);
    memcpy(t13, t2, 4U);
    xsi_driver_first_trans_fast_port(t9);
    xsi_set_current_line(138, ng0);
    t1 = (t0 + 1360U);
    t2 = *((char **)t1);
    t6 = *((int *)t2);
    if (t6 == 0)
        goto LAB27;

LAB38:    if (t6 == 1)
        goto LAB28;

LAB39:    if (t6 == 2)
        goto LAB29;

LAB40:    if (t6 == 3)
        goto LAB30;

LAB41:    if (t6 == 4)
        goto LAB31;

LAB42:    if (t6 == 5)
        goto LAB32;

LAB43:    if (t6 == 6)
        goto LAB33;

LAB44:    if (t6 == 7)
        goto LAB34;

LAB45:    if (t6 == 8)
        goto LAB35;

LAB46:    if (t6 == 9)
        goto LAB36;

LAB47:
LAB37:    xsi_set_current_line(149, ng0);

LAB26:    xsi_set_current_line(151, ng0);
    t1 = (t0 + 1700U);
    t2 = *((char **)t1);
    t1 = (t0 + 2960);
    t5 = (t1 + 32U);
    t8 = *((char **)t5);
    t9 = (t8 + 40U);
    t10 = *((char **)t9);
    memcpy(t10, t2, 7U);
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(152, ng0);
    t1 = (t0 + 1632U);
    t2 = *((char **)t1);
    t1 = (t2 + 0);
    *((int *)t1) = 1;
    goto LAB24;

LAB27:    xsi_set_current_line(139, ng0);
    t1 = (t0 + 4848);
    t8 = (t0 + 1700U);
    t9 = *((char **)t8);
    t8 = (t9 + 0);
    memcpy(t8, t1, 7U);
    goto LAB26;

LAB28:    xsi_set_current_line(140, ng0);
    t1 = (t0 + 4855);
    t5 = (t0 + 1700U);
    t8 = *((char **)t5);
    t5 = (t8 + 0);
    memcpy(t5, t1, 7U);
    goto LAB26;

LAB29:    xsi_set_current_line(141, ng0);
    t1 = (t0 + 4862);
    t5 = (t0 + 1700U);
    t8 = *((char **)t5);
    t5 = (t8 + 0);
    memcpy(t5, t1, 7U);
    goto LAB26;

LAB30:    xsi_set_current_line(142, ng0);
    t1 = (t0 + 4869);
    t5 = (t0 + 1700U);
    t8 = *((char **)t5);
    t5 = (t8 + 0);
    memcpy(t5, t1, 7U);
    goto LAB26;

LAB31:    xsi_set_current_line(143, ng0);
    t1 = (t0 + 4876);
    t5 = (t0 + 1700U);
    t8 = *((char **)t5);
    t5 = (t8 + 0);
    memcpy(t5, t1, 7U);
    goto LAB26;

LAB32:    xsi_set_current_line(144, ng0);
    t1 = (t0 + 4883);
    t5 = (t0 + 1700U);
    t8 = *((char **)t5);
    t5 = (t8 + 0);
    memcpy(t5, t1, 7U);
    goto LAB26;

LAB33:    xsi_set_current_line(145, ng0);
    t1 = (t0 + 4890);
    t5 = (t0 + 1700U);
    t8 = *((char **)t5);
    t5 = (t8 + 0);
    memcpy(t5, t1, 7U);
    goto LAB26;

LAB34:    xsi_set_current_line(146, ng0);
    t1 = (t0 + 4897);
    t5 = (t0 + 1700U);
    t8 = *((char **)t5);
    t5 = (t8 + 0);
    memcpy(t5, t1, 7U);
    goto LAB26;

LAB35:    xsi_set_current_line(147, ng0);
    t1 = (t0 + 4904);
    t5 = (t0 + 1700U);
    t8 = *((char **)t5);
    t5 = (t8 + 0);
    memcpy(t5, t1, 7U);
    goto LAB26;

LAB36:    xsi_set_current_line(148, ng0);
    t1 = (t0 + 4911);
    t5 = (t0 + 1700U);
    t8 = *((char **)t5);
    t5 = (t8 + 0);
    memcpy(t5, t1, 7U);
    goto LAB26;

LAB48:;
LAB49:    xsi_set_current_line(154, ng0);
    t1 = (t0 + 4918);
    t8 = (t0 + 2924);
    t9 = (t8 + 32U);
    t10 = *((char **)t9);
    t11 = (t10 + 40U);
    t12 = *((char **)t11);
    memcpy(t12, t1, 4U);
    xsi_driver_first_trans_fast_port(t8);
    xsi_set_current_line(155, ng0);
    t1 = (t0 + 1428U);
    t2 = *((char **)t1);
    t6 = *((int *)t2);
    if (t6 == 0)
        goto LAB52;

LAB63:    if (t6 == 1)
        goto LAB53;

LAB64:    if (t6 == 2)
        goto LAB54;

LAB65:    if (t6 == 3)
        goto LAB55;

LAB66:    if (t6 == 4)
        goto LAB56;

LAB67:    if (t6 == 5)
        goto LAB57;

LAB68:    if (t6 == 6)
        goto LAB58;

LAB69:    if (t6 == 7)
        goto LAB59;

LAB70:    if (t6 == 8)
        goto LAB60;

LAB71:    if (t6 == 9)
        goto LAB61;

LAB72:
LAB62:    xsi_set_current_line(166, ng0);

LAB51:    xsi_set_current_line(168, ng0);
    t1 = (t0 + 1768U);
    t2 = *((char **)t1);
    t1 = (t0 + 2960);
    t5 = (t1 + 32U);
    t8 = *((char **)t5);
    t9 = (t8 + 40U);
    t10 = *((char **)t9);
    memcpy(t10, t2, 7U);
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(169, ng0);
    t1 = (t0 + 1632U);
    t2 = *((char **)t1);
    t1 = (t2 + 0);
    *((int *)t1) = 2;
    goto LAB24;

LAB52:    xsi_set_current_line(156, ng0);
    t1 = (t0 + 4922);
    t8 = (t0 + 1768U);
    t9 = *((char **)t8);
    t8 = (t9 + 0);
    memcpy(t8, t1, 7U);
    goto LAB51;

LAB53:    xsi_set_current_line(157, ng0);
    t1 = (t0 + 4929);
    t5 = (t0 + 1768U);
    t8 = *((char **)t5);
    t5 = (t8 + 0);
    memcpy(t5, t1, 7U);
    goto LAB51;

LAB54:    xsi_set_current_line(158, ng0);
    t1 = (t0 + 4936);
    t5 = (t0 + 1768U);
    t8 = *((char **)t5);
    t5 = (t8 + 0);
    memcpy(t5, t1, 7U);
    goto LAB51;

LAB55:    xsi_set_current_line(159, ng0);
    t1 = (t0 + 4943);
    t5 = (t0 + 1768U);
    t8 = *((char **)t5);
    t5 = (t8 + 0);
    memcpy(t5, t1, 7U);
    goto LAB51;

LAB56:    xsi_set_current_line(160, ng0);
    t1 = (t0 + 4950);
    t5 = (t0 + 1768U);
    t8 = *((char **)t5);
    t5 = (t8 + 0);
    memcpy(t5, t1, 7U);
    goto LAB51;

LAB57:    xsi_set_current_line(161, ng0);
    t1 = (t0 + 4957);
    t5 = (t0 + 1768U);
    t8 = *((char **)t5);
    t5 = (t8 + 0);
    memcpy(t5, t1, 7U);
    goto LAB51;

LAB58:    xsi_set_current_line(162, ng0);
    t1 = (t0 + 4964);
    t5 = (t0 + 1768U);
    t8 = *((char **)t5);
    t5 = (t8 + 0);
    memcpy(t5, t1, 7U);
    goto LAB51;

LAB59:    xsi_set_current_line(163, ng0);
    t1 = (t0 + 4971);
    t5 = (t0 + 1768U);
    t8 = *((char **)t5);
    t5 = (t8 + 0);
    memcpy(t5, t1, 7U);
    goto LAB51;

LAB60:    xsi_set_current_line(164, ng0);
    t1 = (t0 + 4978);
    t5 = (t0 + 1768U);
    t8 = *((char **)t5);
    t5 = (t8 + 0);
    memcpy(t5, t1, 7U);
    goto LAB51;

LAB61:    xsi_set_current_line(165, ng0);
    t1 = (t0 + 4985);
    t5 = (t0 + 1768U);
    t8 = *((char **)t5);
    t5 = (t8 + 0);
    memcpy(t5, t1, 7U);
    goto LAB51;

LAB73:;
LAB74:    xsi_set_current_line(171, ng0);
    t1 = (t0 + 4992);
    t8 = (t0 + 2924);
    t9 = (t8 + 32U);
    t10 = *((char **)t9);
    t11 = (t10 + 40U);
    t12 = *((char **)t11);
    memcpy(t12, t1, 4U);
    xsi_driver_first_trans_fast_port(t8);
    xsi_set_current_line(172, ng0);
    t1 = (t0 + 1496U);
    t2 = *((char **)t1);
    t6 = *((int *)t2);
    if (t6 == 0)
        goto LAB77;

LAB88:    if (t6 == 1)
        goto LAB78;

LAB89:    if (t6 == 2)
        goto LAB79;

LAB90:    if (t6 == 3)
        goto LAB80;

LAB91:    if (t6 == 4)
        goto LAB81;

LAB92:    if (t6 == 5)
        goto LAB82;

LAB93:    if (t6 == 6)
        goto LAB83;

LAB94:    if (t6 == 7)
        goto LAB84;

LAB95:    if (t6 == 8)
        goto LAB85;

LAB96:    if (t6 == 9)
        goto LAB86;

LAB97:
LAB87:    xsi_set_current_line(183, ng0);

LAB76:    xsi_set_current_line(185, ng0);
    t1 = (t0 + 1836U);
    t2 = *((char **)t1);
    t1 = (t0 + 2960);
    t5 = (t1 + 32U);
    t8 = *((char **)t5);
    t9 = (t8 + 40U);
    t10 = *((char **)t9);
    memcpy(t10, t2, 7U);
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(186, ng0);
    t1 = (t0 + 1632U);
    t2 = *((char **)t1);
    t1 = (t2 + 0);
    *((int *)t1) = 3;
    goto LAB24;

LAB77:    xsi_set_current_line(173, ng0);
    t1 = (t0 + 4996);
    t8 = (t0 + 1836U);
    t9 = *((char **)t8);
    t8 = (t9 + 0);
    memcpy(t8, t1, 7U);
    goto LAB76;

LAB78:    xsi_set_current_line(174, ng0);
    t1 = (t0 + 5003);
    t5 = (t0 + 1836U);
    t8 = *((char **)t5);
    t5 = (t8 + 0);
    memcpy(t5, t1, 7U);
    goto LAB76;

LAB79:    xsi_set_current_line(175, ng0);
    t1 = (t0 + 5010);
    t5 = (t0 + 1836U);
    t8 = *((char **)t5);
    t5 = (t8 + 0);
    memcpy(t5, t1, 7U);
    goto LAB76;

LAB80:    xsi_set_current_line(176, ng0);
    t1 = (t0 + 5017);
    t5 = (t0 + 1836U);
    t8 = *((char **)t5);
    t5 = (t8 + 0);
    memcpy(t5, t1, 7U);
    goto LAB76;

LAB81:    xsi_set_current_line(177, ng0);
    t1 = (t0 + 5024);
    t5 = (t0 + 1836U);
    t8 = *((char **)t5);
    t5 = (t8 + 0);
    memcpy(t5, t1, 7U);
    goto LAB76;

LAB82:    xsi_set_current_line(178, ng0);
    t1 = (t0 + 5031);
    t5 = (t0 + 1836U);
    t8 = *((char **)t5);
    t5 = (t8 + 0);
    memcpy(t5, t1, 7U);
    goto LAB76;

LAB83:    xsi_set_current_line(179, ng0);
    t1 = (t0 + 5038);
    t5 = (t0 + 1836U);
    t8 = *((char **)t5);
    t5 = (t8 + 0);
    memcpy(t5, t1, 7U);
    goto LAB76;

LAB84:    xsi_set_current_line(180, ng0);
    t1 = (t0 + 5045);
    t5 = (t0 + 1836U);
    t8 = *((char **)t5);
    t5 = (t8 + 0);
    memcpy(t5, t1, 7U);
    goto LAB76;

LAB85:    xsi_set_current_line(181, ng0);
    t1 = (t0 + 5052);
    t5 = (t0 + 1836U);
    t8 = *((char **)t5);
    t5 = (t8 + 0);
    memcpy(t5, t1, 7U);
    goto LAB76;

LAB86:    xsi_set_current_line(182, ng0);
    t1 = (t0 + 5059);
    t5 = (t0 + 1836U);
    t8 = *((char **)t5);
    t5 = (t8 + 0);
    memcpy(t5, t1, 7U);
    goto LAB76;

LAB98:;
LAB100:    xsi_set_current_line(190, ng0);
    t1 = (t0 + 5070);
    t8 = (t0 + 1904U);
    t9 = *((char **)t8);
    t8 = (t9 + 0);
    memcpy(t8, t1, 7U);
    goto LAB99;

LAB101:    xsi_set_current_line(191, ng0);
    t1 = (t0 + 5077);
    t5 = (t0 + 1904U);
    t8 = *((char **)t5);
    t5 = (t8 + 0);
    memcpy(t5, t1, 7U);
    goto LAB99;

LAB102:    xsi_set_current_line(192, ng0);
    t1 = (t0 + 5084);
    t5 = (t0 + 1904U);
    t8 = *((char **)t5);
    t5 = (t8 + 0);
    memcpy(t5, t1, 7U);
    goto LAB99;

LAB103:    xsi_set_current_line(193, ng0);
    t1 = (t0 + 5091);
    t5 = (t0 + 1904U);
    t8 = *((char **)t5);
    t5 = (t8 + 0);
    memcpy(t5, t1, 7U);
    goto LAB99;

LAB104:    xsi_set_current_line(194, ng0);
    t1 = (t0 + 5098);
    t5 = (t0 + 1904U);
    t8 = *((char **)t5);
    t5 = (t8 + 0);
    memcpy(t5, t1, 7U);
    goto LAB99;

LAB105:    xsi_set_current_line(195, ng0);
    t1 = (t0 + 5105);
    t5 = (t0 + 1904U);
    t8 = *((char **)t5);
    t5 = (t8 + 0);
    memcpy(t5, t1, 7U);
    goto LAB99;

LAB106:    xsi_set_current_line(196, ng0);
    t1 = (t0 + 5112);
    t5 = (t0 + 1904U);
    t8 = *((char **)t5);
    t5 = (t8 + 0);
    memcpy(t5, t1, 7U);
    goto LAB99;

LAB107:    xsi_set_current_line(197, ng0);
    t1 = (t0 + 5119);
    t5 = (t0 + 1904U);
    t8 = *((char **)t5);
    t5 = (t8 + 0);
    memcpy(t5, t1, 7U);
    goto LAB99;

LAB108:    xsi_set_current_line(198, ng0);
    t1 = (t0 + 5126);
    t5 = (t0 + 1904U);
    t8 = *((char **)t5);
    t5 = (t8 + 0);
    memcpy(t5, t1, 7U);
    goto LAB99;

LAB109:    xsi_set_current_line(199, ng0);
    t1 = (t0 + 5133);
    t5 = (t0 + 1904U);
    t8 = *((char **)t5);
    t5 = (t8 + 0);
    memcpy(t5, t1, 7U);
    goto LAB99;

LAB121:;
}


extern void work_a_3502186584_3212880686_init()
{
	static char *pe[] = {(void *)work_a_3502186584_3212880686_p_0,(void *)work_a_3502186584_3212880686_p_1};
	xsi_register_didat("work_a_3502186584_3212880686", "isim/seven4_isim_beh.exe.sim/work/a_3502186584_3212880686.didat");
	xsi_register_executes(pe);
}
