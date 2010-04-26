/* -*- Mode: C; indent-tabs-mode: t; c-basic-offset: 4; tab-width: 4 -*- */
/*
 * freetuxtv
 * Copyright (C) Eric Beuque 2010 <eric.beuque@gmail.com>
 * 
 * freetuxtv is free software: you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by the
 * Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 * 
 * freetuxtv is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License along
 * with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef _FREETUXTV_WINDOW_ADD_CHANNELS_GROUP_H_
#define _FREETUXTV_WINDOW_ADD_CHANNELS_GROUP_H_

#include <glib-object.h>

#include <gtk/gtk.h>

#include "freetuxtv-app.h"
#include "gtk-progress-dialog.h"

G_BEGIN_DECLS

#define FREETUXTV_TYPE_WINDOW_ADD_CHANNELS_GROUP             (freetuxtv_window_add_channels_group_get_type ())
#define FREETUXTV_WINDOW_ADD_CHANNELS_GROUP(obj)             (G_TYPE_CHECK_INSTANCE_CAST ((obj), FREETUXTV_TYPE_WINDOW_ADD_CHANNELS_GROUP, FreetuxTVWindowAddChannelsGroup))
#define FREETUXTV_WINDOW_ADD_CHANNELS_GROUP_CLASS(klass)     (G_TYPE_CHECK_CLASS_CAST ((klass), FREETUXTV_TYPE_WINDOW_ADD_CHANNELS_GROUP, FreetuxTVWindowAddChannelsGroupClass))
#define FREETUXTV_IS_WINDOW_ADD_CHANNELS_GROUP(obj)          (G_TYPE_CHECK_INSTANCE_TYPE ((obj), FREETUXTV_TYPE_WINDOW_ADD_CHANNELS_GROUP))
#define FREETUXTV_IS_WINDOW_ADD_CHANNELS_GROUP_CLASS(klass)  (G_TYPE_CHECK_CLASS_TYPE ((klass), FREETUXTV_TYPE_WINDOW_ADD_CHANNELS_GROUP))
#define FREETUXTV_WINDOW_ADD_CHANNELS_GROUP_GET_CLASS(obj)   (G_TYPE_INSTANCE_GET_CLASS ((obj), FREETUXTV_TYPE_WINDOW_ADD_CHANNELS_GROUP, FreetuxTVWindowAddChannelsGroupClass))

typedef struct _FreetuxTVWindowAddChannelsGroupClass FreetuxTVWindowAddChannelsGroupClass;
typedef struct _FreetuxTVWindowAddChannelsGroup FreetuxTVWindowAddChannelsGroup;

struct _FreetuxTVWindowAddChannelsGroupClass
{
	GObjectClass parent_class;

	gboolean initialized;
	
	gulong on_buttonrefresh_clicked_hid;
	gulong on_dialog_response_hid;
};

struct _FreetuxTVWindowAddChannelsGroup
{
	GObject parent_instance;
};

GType freetuxtv_window_add_channels_group_get_type (void) G_GNUC_CONST;

FreetuxTVWindowAddChannelsGroup*
freetuxtv_window_add_channels_group_new (FreetuxTVApp* app);

gint
freetuxtv_window_add_channels_group_run (
	FreetuxTVWindowAddChannelsGroup* pWindowAddChannelsGroup);

G_END_DECLS

#endif /* _FREEUXTV_WINDOW_ADD_CHANNELS_GROUP_H_ */
