/*************************************************************************/
/* Copyright (C) 2007-2009 sujith <m.sujith@gmail.com>                   */
/* Copyright (C) 2009-2013 matias <mati86dl@gmail.com>                   */
/*                                                                       */
/* This program is free software: you can redistribute it and/or modify  */
/* it under the terms of the GNU General Public License as published by  */
/* the Free Software Foundation, either version 3 of the License, or     */
/* (at your option) any later version.                                   */
/*                                                                       */
/* This program is distributed in the hope that it will be useful,       */
/* but WITHOUT ANY WARRANTY; without even the implied warranty of        */
/* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         */
/* GNU General Public License for more details.                          */
/*                                                                       */
/* You should have received a copy of the GNU General Public License     */
/* along with this program.  If not, see <http://www.gnu.org/licenses/>. */
/*************************************************************************/

#ifndef PRAGHA_STATUSICON_H
#define PRAGHA_STATUSICON_H

#include <gtk/gtk.h>

/* pragha.h */
typedef struct _PraghaApplication PraghaApplication;

#define PRAGHA_TYPE_STATUS_ICON                  (pragha_status_icon_get_type ())
#define PRAGHA_STATUS_ICON(obj)                  (G_TYPE_CHECK_INSTANCE_CAST ((obj), PRAGHA_TYPE_STATUS_ICON, PraghaStatusIcon))
#define PRAGHA_IS_STATUS_ICON(obj)               (G_TYPE_CHECK_INSTANCE_TYPE ((obj), PRAGHA_TYPE_STATUS_ICON))
#define PRAGHA_STATUS_ICON_CLASS(klass)          (G_TYPE_CHECK_CLASS_CAST ((klass), PRAGHA_TYPE_STATUS_ICON, PraghaStatusIconClass))
#define PRAGHA_IS_STATUS_ICON_CLASS(klass)       (G_TYPE_CHECK_CLASS_TYPE ((klass), PRAGHA_TYPE_STATUS_ICON))
#define PRAGHA_STATUS_ICON_GET_CLASS(obj)        (G_TYPE_INSTANCE_GET_CLASS ((obj), PRAGHA_TYPE_STATUS_ICON, PraghaStatusIconClass))

G_GNUC_BEGIN_IGNORE_DEPRECATIONS
typedef struct {
	GtkStatusIconClass __parent__;
} PraghaStatusIconClass;
G_GNUC_END_IGNORE_DEPRECATIONS

typedef struct _PraghaStatusIcon PraghaStatusIcon;

gint
pragha_systray_append_plugin_action (PraghaStatusIcon *status_icon,
                                     GtkActionGroup   *action_group,
                                     const gchar      *menu_xml);
void
pragha_systray_remove_plugin_action (PraghaStatusIcon *status_icon,
                                     GtkActionGroup   *action_group,
                                     gint              merge_id);

PraghaStatusIcon *pragha_status_icon_new (PraghaApplication *pragha);

#endif /* PRAGHA_STATUSICON_H */