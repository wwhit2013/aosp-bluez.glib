/*
 * Copyright © 2011 Canonical Ltd.
 *
 *  This library is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU Lesser General Public License as
 *  published by the Free Software Foundation; either version 2 of the
 *  licence, or (at your option) any later version.
 *
 *  This library is distributed in the hope that it will be useful, but
 *  WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 *  Lesser General Public License for more details.
 *
 *  You should have received a copy of the GNU Lesser General Public
 *  License along with this library; if not, write to the Free Software
 *  Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA 02111-1307,
 *  USA.
 *
 * Author: Ryan Lortie <desrt@desrt.ca>
 */

#ifndef __G_MENU_EXPORTER_H__
#define __G_MENU_EXPORTER_H__

#include <gio/gdbusconnection.h>
#include <gio/gmenumodel.h>

G_BEGIN_DECLS

gboolean g_menu_model_dbus_export_start (GDBusConnection  *connection,
                                         const gchar      *object_path,
                                         GMenuModel       *menu,
                                         GError          **error);

gboolean g_menu_model_dbus_export_stop  (GMenuModel       *menu);

gboolean g_menu_model_dbus_export_query (GMenuModel       *menu,
                                         GDBusConnection **connection,
                                         const gchar     **object_path);

G_END_DECLS

#endif /* __G_MENU_EXPORTER_H__ */