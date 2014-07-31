/** \file cmd.h
 *  \brief Header: routines invoked by a function key
 *
 *  They normally operate on the current panel.
 */

#ifndef MC__CMD_H
#define MC__CMD_H

#include "lib/global.h"

/*** typedefs(not structures) and defined constants **********************************************/

/*** enums ***************************************************************************************/

/*** structures declarations (and typedefs of structures)*****************************************/

/*** global variables defined in .c file *********************************************************/

/*** declarations of public functions ************************************************************/

void undelete_cmd (void);
void smart_dirsize_cmd (void);
void single_dirsize_cmd (void);
void dirsizes_cmd (void);
gboolean view_file_at_line (const vfs_path_t * filename_vpath, gboolean plain_view,
                            gboolean internal, long start_line);
gboolean view_file (const vfs_path_t * filename_vpath, gboolean normal, gboolean internal);
void view_file_cmd (void);
void edit_file_at_line (const vfs_path_t * what_vpath, gboolean internal, long start_line);
void panel_tree_cmd (void);
void select_invert_cmd (void);
void unselect_cmd (void);
void select_cmd (void);
void swap_cmd (void);
void view_other_cmd (void);
void save_setup_cmd (void);
char *get_random_hint (int force);
void user_file_menu_cmd (void);
void info_cmd (void);
void quick_cmd_no_menu (void);
void info_cmd_no_menu (void);
void quick_view_cmd (void);

/*** inline functions ****************************************************************************/
#endif /* MC__CMD_H */
