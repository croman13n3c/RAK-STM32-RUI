/**
 *
 * @page ATCMD AT Command Manual
 *
 * @section ATCMD_sleep Sleep Command
 *
 * This section describes the commands related to sleep.
 *
 * @subsection ATCMD_sleep_1 AT+SLEEP: sleep mode
 *
 * This command provides a way to enter sleep mode
 *
 * | Command            | Input parameter    | Return value                                                      | Return code        |
 * |:------------------:|:------------------:|:------------------------------------------------------------------|:------------------:|
 * | AT+SLEEP?          | --                 | AT+SLEEP: enter sleep mode for a period of time (ms)              | OK                 |
 * | AT+SLEEP=\<positive integer\>   | <positive integer>      |                                                 | OK / AT_PARAM_ERROR|
 * | Example<br>AT+SLEEP= | 1000             | --                                                                | OK                 |
 * 
 * @subsection ATCMD_sleep_2 AT+LPM: low power mode
 *
 * This command provides a way to enable/disable low power mode
 *
 * | Command            | Input parameter    | Return value                                                      | Return code        |
 * |:------------------:|:------------------:|:------------------------------------------------------------------|:------------------:|
 * | AT+LPM?            | --                 | AT+LPM: get or set the low power mode<br>0 = off<br>1 = on        | OK                 |
 * | AT+LPM=?           | --                 | \<string\>                                                        | OK                 |
 * | AT+LPM=\<Input\>   | 0 or 1             |                                                                   | OK / AT_PARAM_ERROR|
 * | Example<br>AT+LPM= | 1                  | --                                                                | OK                 |
 * | Example<br>AT+LPM=?|                    | 1                                                                 | OK                 |
 * 
 * @subsection ATCMD_sleep_3 AT+LPMLVL: the sleep level for low power mode
 *
 * This command provides a way to setting sleep level for low power mode to support STM32 STOP Mode.
 *
 * | Command               | Input parameter    | Return value                                                                                | Return code        |
 * |:---------------------:|:------------------:|:--------------------------------------------------------------------------------------------|:------------------:|
 * | AT+LPMLVL?            | --                 | AT+LPMLVL: get or set the sleep level for low power mode<br>1 = STOP1 Mode<br>2 = STOP2 Mode| OK                 |
 * | AT+LPMLVL=?           | --                 | 1 or 2                                                                                      | OK                 |
 * | AT+LPMLVL=\<Input\>   | 1 or 2             | --                                                                                          | OK / AT_PARAM_ERROR|
 * | Example<br>AT+LPMLVL= | 1                  | --                                                                                          | OK                 |
 * | Example<br>AT+LPMLVL=?|                    | 1                                                                                           | OK                 |
 *
 */

#ifndef _ATCMD_SLEEP_DEF_H_
#define _ATCMD_SLEEP_DEF_H_

#define ATCMD_SLEEP                 "AT+SLEEP"
#define ATCMD_AUTOSLEEP             "AT+LPM"
#define ATCMD_AUTOSLEEPLEVEL        "AT+LPMLVL"
#endif //_ATCMD_SLEEP_DEF_H_
