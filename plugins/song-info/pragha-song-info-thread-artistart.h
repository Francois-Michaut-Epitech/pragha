/*************************************************************************/
/* Copyright (C) 2011-2018 matias <mati86dl@gmail.com>                   */
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

#ifndef PRAGHA_SONGINFO_THREAD_ARTISTART_H
#define PRAGHA_SONGINFO_THREAD_ARTISTART_H

#include <glib.h>

#include <glyr/glyr.h>
#include "pragha-song-info-plugin.h"

G_BEGIN_DECLS

void
pragha_songinfo_plugin_get_artist_art (PraghaSongInfoPlugin *plugin,
                                       const gchar          *artist);

G_END_DECLS

#endif /* PRAGHA_SONGINFO_THREAD_ARTISTART_H */
