/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/TCP_DMI_Standalone\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:43:36
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MergeMessagesToPlain_iteration_DMI_Control_Pkg_Sub_func_TextMessages.h"

/* DMI_Control_Pkg::Sub_func::TextMessages::MergeMessagesToPlain_iteration */
void MergeMessagesToPlain_iteration_DMI_Control_Pkg_Sub_func_TextMessages(
  /* DMI_Control_Pkg::Sub_func::TextMessages::MergeMessagesToPlain_iteration::index */kcg_int index,
  /* DMI_Control_Pkg::Sub_func::TextMessages::MergeMessagesToPlain_iteration::acc */array_char_30_5 *acc,
  /* DMI_Control_Pkg::Sub_func::TextMessages::MergeMessagesToPlain_iteration::DefaultMsgQueue */array_char_30_5 *DefaultMsgQueue,
  /* DMI_Control_Pkg::Sub_func::TextMessages::MergeMessagesToPlain_iteration::num1 */kcg_int num1,
  /* DMI_Control_Pkg::Sub_func::TextMessages::MergeMessagesToPlain_iteration::MsgQueue2 */array_char_30_5 *MsgQueue2,
  /* DMI_Control_Pkg::Sub_func::TextMessages::MergeMessagesToPlain_iteration::num2 */kcg_int num2,
  /* DMI_Control_Pkg::Sub_func::TextMessages::MergeMessagesToPlain_iteration::MsgQueue3 */array_char_30_5 *MsgQueue3,
  /* DMI_Control_Pkg::Sub_func::TextMessages::MergeMessagesToPlain_iteration::num3 */kcg_int num3,
  /* DMI_Control_Pkg::Sub_func::TextMessages::MergeMessagesToPlain_iteration::MsgQueue4 */array_char_30_5 *MsgQueue4,
  /* DMI_Control_Pkg::Sub_func::TextMessages::MergeMessagesToPlain_iteration::num4 */kcg_int num4,
  /* DMI_Control_Pkg::Sub_func::TextMessages::MergeMessagesToPlain_iteration::MsgQueue5 */array_char_30_5 *MsgQueue5,
  /* DMI_Control_Pkg::Sub_func::TextMessages::MergeMessagesToPlain_iteration::num5 */kcg_int num5,
  /* DMI_Control_Pkg::Sub_func::TextMessages::MergeMessagesToPlain_iteration::MsgQueue6 */array_char_30_5 *MsgQueue6,
  /* DMI_Control_Pkg::Sub_func::TextMessages::MergeMessagesToPlain_iteration::num6 */kcg_int num6,
  /* DMI_Control_Pkg::Sub_func::TextMessages::MergeMessagesToPlain_iteration::MsgQueue7 */array_char_30_5 *MsgQueue7,
  /* DMI_Control_Pkg::Sub_func::TextMessages::MergeMessagesToPlain_iteration::num7 */kcg_int num7,
  /* DMI_Control_Pkg::Sub_func::TextMessages::MergeMessagesToPlain_iteration::MsgQueue8 */array_char_30_5 *MsgQueue8,
  /* DMI_Control_Pkg::Sub_func::TextMessages::MergeMessagesToPlain_iteration::num8 */kcg_int num8,
  /* DMI_Control_Pkg::Sub_func::TextMessages::MergeMessagesToPlain_iteration::MsgQueue9 */array_char_30_5 *MsgQueue9,
  /* DMI_Control_Pkg::Sub_func::TextMessages::MergeMessagesToPlain_iteration::num9 */kcg_int num9,
  /* DMI_Control_Pkg::Sub_func::TextMessages::MergeMessagesToPlain_iteration::MsgQueue10 */array_char_30_5 *MsgQueue10,
  /* DMI_Control_Pkg::Sub_func::TextMessages::MergeMessagesToPlain_iteration::scrollLevel */kcg_int scrollLevel,
  /* DMI_Control_Pkg::Sub_func::TextMessages::MergeMessagesToPlain_iteration::plainTextQueue */array_char_30_5 *plainTextQueue)
{
  array_char_30 tmp18;
  array_char_30 tmp17;
  array_char_30 tmp16;
  array_char_30 tmp15;
  array_char_30 tmp14;
  array_char_30 tmp13;
  array_char_30 tmp12;
  array_char_30 tmp11;
  array_char_30 tmp10;
  array_char_30 tmp9;
  array_char_30 tmp8;
  array_char_30 tmp7;
  array_char_30 tmp6;
  array_char_30 tmp5;
  array_char_30 tmp4;
  array_char_30 tmp3;
  array_char_30 tmp2;
  array_char_30 tmp1;
  array_char_30 tmp;
  /* DMI_Control_Pkg::Sub_func::TextMessages::MergeMessagesToPlain_iteration::_L272 */ kcg_int _L272;
  /* DMI_Control_Pkg::Sub_func::TextMessages::MergeMessagesToPlain_iteration::_L308 */ kcg_int _L308;
  /* DMI_Control_Pkg::Sub_func::TextMessages::MergeMessagesToPlain_iteration::_L337 */ kcg_int _L337;
  /* DMI_Control_Pkg::Sub_func::TextMessages::MergeMessagesToPlain_iteration::_L366 */ kcg_int _L366;
  /* DMI_Control_Pkg::Sub_func::TextMessages::MergeMessagesToPlain_iteration::_L397 */ kcg_int _L397;
  /* DMI_Control_Pkg::Sub_func::TextMessages::MergeMessagesToPlain_iteration::_L428 */ kcg_int _L428;
  /* DMI_Control_Pkg::Sub_func::TextMessages::MergeMessagesToPlain_iteration::_L455 */ kcg_int _L455;
  /* DMI_Control_Pkg::Sub_func::TextMessages::MergeMessagesToPlain_iteration::_L512 */ kcg_int _L512;
  /* DMI_Control_Pkg::Sub_func::TextMessages::MergeMessagesToPlain_iteration::_L522 */ kcg_int _L522;
  
  _L512 = index + scrollLevel;
  _L522 = scrollLevel + index;
  _L272 = num1 + num2;
  _L308 = _L272 + num3;
  _L337 = _L308 + num4;
  _L366 = _L337 + num5;
  _L397 = _L366 + num6;
  _L428 = _L397 + num7;
  _L455 = _L428 + num8;
  if ((0 <= _L512) & (_L512 < 5)) {
    kcg_copy_array_char_30(&tmp18, &(*DefaultMsgQueue)[_L512]);
  }
  else {
    kcg_copy_array_char_30(
      &tmp18,
      (array_char_30 *) &cPlainText_single_DMI_Control_Pkg);
  }
  if (!kcg_comp_array_char_30(
      &tmp18,
      (array_char_30 *) &cPlainText_single_DMI_Control_Pkg)) {
    kcg_copy_array_char_30_5(plainTextQueue, acc);
    if ((0 <= _L512) & (_L512 < 5)) {
      kcg_copy_array_char_30(&tmp17, &(*DefaultMsgQueue)[_L512]);
    }
    else {
      kcg_copy_array_char_30(
        &tmp17,
        (array_char_30 *) &cPlainText_single_DMI_Control_Pkg);
    }
    if ((0 <= index) & (index < 5)) {
      kcg_copy_array_char_30(&(*plainTextQueue)[index], &tmp17);
    }
  }
  else {
    if ((0 <= _L522 - num1) & (_L522 - num1 < 5)) {
      kcg_copy_array_char_30(&tmp16, &(*MsgQueue2)[_L522 - num1]);
    }
    else {
      kcg_copy_array_char_30(
        &tmp16,
        (array_char_30 *) &cPlainText_single_DMI_Control_Pkg);
    }
    if (!kcg_comp_array_char_30(
        &tmp16,
        (array_char_30 *) &cPlainText_single_DMI_Control_Pkg)) {
      kcg_copy_array_char_30_5(plainTextQueue, acc);
      if ((0 <= _L522 - num1) & (_L522 - num1 < 5)) {
        kcg_copy_array_char_30(&tmp15, &(*MsgQueue2)[_L522 - num1]);
      }
      else {
        kcg_copy_array_char_30(
          &tmp15,
          (array_char_30 *) &cPlainText_single_DMI_Control_Pkg);
      }
      if ((0 <= index) & (index < 5)) {
        kcg_copy_array_char_30(&(*plainTextQueue)[index], &tmp15);
      }
    }
    else {
      if ((0 <= _L512 - _L272) & (_L512 - _L272 < 5)) {
        kcg_copy_array_char_30(&tmp14, &(*MsgQueue3)[_L512 - _L272]);
      }
      else {
        kcg_copy_array_char_30(
          &tmp14,
          (array_char_30 *) &cPlainText_single_DMI_Control_Pkg);
      }
      if (!kcg_comp_array_char_30(
          &tmp14,
          (array_char_30 *) &cPlainText_single_DMI_Control_Pkg)) {
        kcg_copy_array_char_30_5(plainTextQueue, acc);
        if ((0 <= _L512 - _L272) & (_L512 - _L272 < 5)) {
          kcg_copy_array_char_30(&tmp13, &(*MsgQueue3)[_L512 - _L272]);
        }
        else {
          kcg_copy_array_char_30(
            &tmp13,
            (array_char_30 *) &cPlainText_single_DMI_Control_Pkg);
        }
        if ((0 <= index) & (index < 5)) {
          kcg_copy_array_char_30(&(*plainTextQueue)[index], &tmp13);
        }
      }
      else {
        if ((0 <= _L512 - _L308) & (_L512 - _L308 < 5)) {
          kcg_copy_array_char_30(&tmp12, &(*MsgQueue4)[_L512 - _L308]);
        }
        else {
          kcg_copy_array_char_30(
            &tmp12,
            (array_char_30 *) &cPlainText_single_DMI_Control_Pkg);
        }
        if (!kcg_comp_array_char_30(
            &tmp12,
            (array_char_30 *) &cPlainText_single_DMI_Control_Pkg)) {
          kcg_copy_array_char_30_5(plainTextQueue, acc);
          if ((0 <= _L512 - _L308) & (_L512 - _L308 < 5)) {
            kcg_copy_array_char_30(&tmp11, &(*MsgQueue4)[_L512 - _L308]);
          }
          else {
            kcg_copy_array_char_30(
              &tmp11,
              (array_char_30 *) &cPlainText_single_DMI_Control_Pkg);
          }
          if ((0 <= index) & (index < 5)) {
            kcg_copy_array_char_30(&(*plainTextQueue)[index], &tmp11);
          }
        }
        else {
          if ((0 <= _L512 - _L337) & (_L512 - _L337 < 5)) {
            kcg_copy_array_char_30(&tmp10, &(*MsgQueue5)[_L512 - _L337]);
          }
          else {
            kcg_copy_array_char_30(
              &tmp10,
              (array_char_30 *) &cPlainText_single_DMI_Control_Pkg);
          }
          if (!kcg_comp_array_char_30(
              &tmp10,
              (array_char_30 *) &cPlainText_single_DMI_Control_Pkg)) {
            kcg_copy_array_char_30_5(plainTextQueue, acc);
            if ((0 <= _L512 - _L337) & (_L512 - _L337 < 5)) {
              kcg_copy_array_char_30(&tmp9, &(*MsgQueue5)[_L512 - _L337]);
            }
            else {
              kcg_copy_array_char_30(
                &tmp9,
                (array_char_30 *) &cPlainText_single_DMI_Control_Pkg);
            }
            if ((0 <= index) & (index < 5)) {
              kcg_copy_array_char_30(&(*plainTextQueue)[index], &tmp9);
            }
          }
          else {
            if ((0 <= _L512 - _L366) & (_L512 - _L366 < 5)) {
              kcg_copy_array_char_30(&tmp8, &(*MsgQueue6)[_L512 - _L366]);
            }
            else {
              kcg_copy_array_char_30(
                &tmp8,
                (array_char_30 *) &cPlainText_single_DMI_Control_Pkg);
            }
            if (!kcg_comp_array_char_30(
                &tmp8,
                (array_char_30 *) &cPlainText_single_DMI_Control_Pkg)) {
              kcg_copy_array_char_30_5(plainTextQueue, acc);
              if ((0 <= _L512 - _L366) & (_L512 - _L366 < 5)) {
                kcg_copy_array_char_30(&tmp7, &(*MsgQueue6)[_L512 - _L366]);
              }
              else {
                kcg_copy_array_char_30(
                  &tmp7,
                  (array_char_30 *) &cPlainText_single_DMI_Control_Pkg);
              }
              if ((0 <= index) & (index < 5)) {
                kcg_copy_array_char_30(&(*plainTextQueue)[index], &tmp7);
              }
            }
            else {
              if ((0 <= _L512 - _L397) & (_L512 - _L397 < 5)) {
                kcg_copy_array_char_30(&tmp6, &(*MsgQueue7)[_L512 - _L397]);
              }
              else {
                kcg_copy_array_char_30(
                  &tmp6,
                  (array_char_30 *) &cPlainText_single_DMI_Control_Pkg);
              }
              if (!kcg_comp_array_char_30(
                  &tmp6,
                  (array_char_30 *) &cPlainText_single_DMI_Control_Pkg)) {
                kcg_copy_array_char_30_5(plainTextQueue, acc);
                if ((0 <= _L512 - _L397) & (_L512 - _L397 < 5)) {
                  kcg_copy_array_char_30(&tmp5, &(*MsgQueue7)[_L512 - _L397]);
                }
                else {
                  kcg_copy_array_char_30(
                    &tmp5,
                    (array_char_30 *) &cPlainText_single_DMI_Control_Pkg);
                }
                if ((0 <= index) & (index < 5)) {
                  kcg_copy_array_char_30(&(*plainTextQueue)[index], &tmp5);
                }
              }
              else {
                if ((0 <= _L512 - _L428) & (_L512 - _L428 < 5)) {
                  kcg_copy_array_char_30(&tmp4, &(*MsgQueue8)[_L512 - _L428]);
                }
                else {
                  kcg_copy_array_char_30(
                    &tmp4,
                    (array_char_30 *) &cPlainText_single_DMI_Control_Pkg);
                }
                if (!kcg_comp_array_char_30(
                    &tmp4,
                    (array_char_30 *) &cPlainText_single_DMI_Control_Pkg)) {
                  kcg_copy_array_char_30_5(plainTextQueue, acc);
                  if ((0 <= _L512 - _L428) & (_L512 - _L428 < 5)) {
                    kcg_copy_array_char_30(&tmp3, &(*MsgQueue8)[_L512 - _L428]);
                  }
                  else {
                    kcg_copy_array_char_30(
                      &tmp3,
                      (array_char_30 *) &cPlainText_single_DMI_Control_Pkg);
                  }
                  if ((0 <= index) & (index < 5)) {
                    kcg_copy_array_char_30(&(*plainTextQueue)[index], &tmp3);
                  }
                }
                else {
                  if ((0 <= _L512 - _L455) & (_L512 - _L455 < 5)) {
                    kcg_copy_array_char_30(&tmp2, &(*MsgQueue9)[_L512 - _L455]);
                  }
                  else {
                    kcg_copy_array_char_30(
                      &tmp2,
                      (array_char_30 *) &cPlainText_single_DMI_Control_Pkg);
                  }
                  if (!kcg_comp_array_char_30(
                      &tmp2,
                      (array_char_30 *) &cPlainText_single_DMI_Control_Pkg)) {
                    kcg_copy_array_char_30_5(plainTextQueue, acc);
                    if ((0 <= _L512 - _L455) & (_L512 - _L455 < 5)) {
                      kcg_copy_array_char_30(
                        &tmp1,
                        &(*MsgQueue9)[_L512 - _L455]);
                    }
                    else {
                      kcg_copy_array_char_30(
                        &tmp1,
                        (array_char_30 *) &cPlainText_single_DMI_Control_Pkg);
                    }
                    if ((0 <= index) & (index < 5)) {
                      kcg_copy_array_char_30(&(*plainTextQueue)[index], &tmp1);
                    }
                  }
                  else {
                    kcg_copy_array_char_30_5(plainTextQueue, acc);
                    if ((0 <= _L512 - (_L455 + num9)) & (_L512 - (_L455 +
                          num9) < 5)) {
                      kcg_copy_array_char_30(
                        &tmp,
                        &(*MsgQueue10)[_L512 - (_L455 + num9)]);
                    }
                    else {
                      kcg_copy_array_char_30(
                        &tmp,
                        (array_char_30 *) &cPlainText_single_DMI_Control_Pkg);
                    }
                    if ((0 <= index) & (index < 5)) {
                      kcg_copy_array_char_30(&(*plainTextQueue)[index], &tmp);
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** MergeMessagesToPlain_iteration_DMI_Control_Pkg_Sub_func_TextMessages.c
** Generation date: 2015-11-20T19:43:36
*************************************************************$ */

