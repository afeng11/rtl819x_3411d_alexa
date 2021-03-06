/* rygel-tracker-titles.c generated by valac 0.16.1, the Vala compiler
 * generated from rygel-tracker-titles.vala, do not modify */

/*
 * Copyright (C) 2010 Nokia Corporation.
 *
 * Author: Zeeshan Ali (Khattak) <zeeshanak@gnome.org>
 *                               <zeeshan.ali@nokia.com>
 *
 * This file is part of Rygel.
 *
 * Rygel is free software; you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * Rygel is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this program; if not, write to the Free Software Foundation,
 * Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301, USA.
 */

#include <glib.h>
#include <glib-object.h>
#include <rygel-server.h>
#include <stdlib.h>
#include <string.h>
#include <gee.h>
#include <glib/gi18n-lib.h>


#define RYGEL_TRACKER_TYPE_METADATA_CONTAINER (rygel_tracker_metadata_container_get_type ())
#define RYGEL_TRACKER_METADATA_CONTAINER(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), RYGEL_TRACKER_TYPE_METADATA_CONTAINER, RygelTrackerMetadataContainer))
#define RYGEL_TRACKER_METADATA_CONTAINER_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), RYGEL_TRACKER_TYPE_METADATA_CONTAINER, RygelTrackerMetadataContainerClass))
#define RYGEL_TRACKER_IS_METADATA_CONTAINER(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), RYGEL_TRACKER_TYPE_METADATA_CONTAINER))
#define RYGEL_TRACKER_IS_METADATA_CONTAINER_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), RYGEL_TRACKER_TYPE_METADATA_CONTAINER))
#define RYGEL_TRACKER_METADATA_CONTAINER_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), RYGEL_TRACKER_TYPE_METADATA_CONTAINER, RygelTrackerMetadataContainerClass))

typedef struct _RygelTrackerMetadataContainer RygelTrackerMetadataContainer;
typedef struct _RygelTrackerMetadataContainerClass RygelTrackerMetadataContainerClass;
typedef struct _RygelTrackerMetadataContainerPrivate RygelTrackerMetadataContainerPrivate;

#define RYGEL_TRACKER_TYPE_QUERY (rygel_tracker_query_get_type ())
#define RYGEL_TRACKER_QUERY(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), RYGEL_TRACKER_TYPE_QUERY, RygelTrackerQuery))
#define RYGEL_TRACKER_QUERY_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), RYGEL_TRACKER_TYPE_QUERY, RygelTrackerQueryClass))
#define RYGEL_TRACKER_IS_QUERY(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), RYGEL_TRACKER_TYPE_QUERY))
#define RYGEL_TRACKER_IS_QUERY_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), RYGEL_TRACKER_TYPE_QUERY))
#define RYGEL_TRACKER_QUERY_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), RYGEL_TRACKER_TYPE_QUERY, RygelTrackerQueryClass))

typedef struct _RygelTrackerQuery RygelTrackerQuery;
typedef struct _RygelTrackerQueryClass RygelTrackerQueryClass;

#define RYGEL_TRACKER_TYPE_SELECTION_QUERY (rygel_tracker_selection_query_get_type ())
#define RYGEL_TRACKER_SELECTION_QUERY(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), RYGEL_TRACKER_TYPE_SELECTION_QUERY, RygelTrackerSelectionQuery))
#define RYGEL_TRACKER_SELECTION_QUERY_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), RYGEL_TRACKER_TYPE_SELECTION_QUERY, RygelTrackerSelectionQueryClass))
#define RYGEL_TRACKER_IS_SELECTION_QUERY(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), RYGEL_TRACKER_TYPE_SELECTION_QUERY))
#define RYGEL_TRACKER_IS_SELECTION_QUERY_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), RYGEL_TRACKER_TYPE_SELECTION_QUERY))
#define RYGEL_TRACKER_SELECTION_QUERY_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), RYGEL_TRACKER_TYPE_SELECTION_QUERY, RygelTrackerSelectionQueryClass))

typedef struct _RygelTrackerSelectionQuery RygelTrackerSelectionQuery;
typedef struct _RygelTrackerSelectionQueryClass RygelTrackerSelectionQueryClass;

#define RYGEL_TRACKER_TYPE_SEARCH_CONTAINER (rygel_tracker_search_container_get_type ())
#define RYGEL_TRACKER_SEARCH_CONTAINER(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), RYGEL_TRACKER_TYPE_SEARCH_CONTAINER, RygelTrackerSearchContainer))
#define RYGEL_TRACKER_SEARCH_CONTAINER_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), RYGEL_TRACKER_TYPE_SEARCH_CONTAINER, RygelTrackerSearchContainerClass))
#define RYGEL_TRACKER_IS_SEARCH_CONTAINER(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), RYGEL_TRACKER_TYPE_SEARCH_CONTAINER))
#define RYGEL_TRACKER_IS_SEARCH_CONTAINER_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), RYGEL_TRACKER_TYPE_SEARCH_CONTAINER))
#define RYGEL_TRACKER_SEARCH_CONTAINER_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), RYGEL_TRACKER_TYPE_SEARCH_CONTAINER, RygelTrackerSearchContainerClass))

typedef struct _RygelTrackerSearchContainer RygelTrackerSearchContainer;
typedef struct _RygelTrackerSearchContainerClass RygelTrackerSearchContainerClass;

#define RYGEL_TRACKER_TYPE_ITEM_FACTORY (rygel_tracker_item_factory_get_type ())
#define RYGEL_TRACKER_ITEM_FACTORY(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), RYGEL_TRACKER_TYPE_ITEM_FACTORY, RygelTrackerItemFactory))
#define RYGEL_TRACKER_ITEM_FACTORY_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), RYGEL_TRACKER_TYPE_ITEM_FACTORY, RygelTrackerItemFactoryClass))
#define RYGEL_TRACKER_IS_ITEM_FACTORY(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), RYGEL_TRACKER_TYPE_ITEM_FACTORY))
#define RYGEL_TRACKER_IS_ITEM_FACTORY_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), RYGEL_TRACKER_TYPE_ITEM_FACTORY))
#define RYGEL_TRACKER_ITEM_FACTORY_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), RYGEL_TRACKER_TYPE_ITEM_FACTORY, RygelTrackerItemFactoryClass))

typedef struct _RygelTrackerItemFactory RygelTrackerItemFactory;
typedef struct _RygelTrackerItemFactoryClass RygelTrackerItemFactoryClass;

#define RYGEL_TRACKER_TYPE_QUERY_TRIPLETS (rygel_tracker_query_triplets_get_type ())
#define RYGEL_TRACKER_QUERY_TRIPLETS(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), RYGEL_TRACKER_TYPE_QUERY_TRIPLETS, RygelTrackerQueryTriplets))
#define RYGEL_TRACKER_QUERY_TRIPLETS_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), RYGEL_TRACKER_TYPE_QUERY_TRIPLETS, RygelTrackerQueryTripletsClass))
#define RYGEL_TRACKER_IS_QUERY_TRIPLETS(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), RYGEL_TRACKER_TYPE_QUERY_TRIPLETS))
#define RYGEL_TRACKER_IS_QUERY_TRIPLETS_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), RYGEL_TRACKER_TYPE_QUERY_TRIPLETS))
#define RYGEL_TRACKER_QUERY_TRIPLETS_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), RYGEL_TRACKER_TYPE_QUERY_TRIPLETS, RygelTrackerQueryTripletsClass))

typedef struct _RygelTrackerQueryTriplets RygelTrackerQueryTriplets;
typedef struct _RygelTrackerQueryTripletsClass RygelTrackerQueryTripletsClass;

#define RYGEL_TRACKER_TYPE_METADATA_VALUES (rygel_tracker_metadata_values_get_type ())
#define RYGEL_TRACKER_METADATA_VALUES(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), RYGEL_TRACKER_TYPE_METADATA_VALUES, RygelTrackerMetadataValues))
#define RYGEL_TRACKER_METADATA_VALUES_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), RYGEL_TRACKER_TYPE_METADATA_VALUES, RygelTrackerMetadataValuesClass))
#define RYGEL_TRACKER_IS_METADATA_VALUES(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), RYGEL_TRACKER_TYPE_METADATA_VALUES))
#define RYGEL_TRACKER_IS_METADATA_VALUES_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), RYGEL_TRACKER_TYPE_METADATA_VALUES))
#define RYGEL_TRACKER_METADATA_VALUES_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), RYGEL_TRACKER_TYPE_METADATA_VALUES, RygelTrackerMetadataValuesClass))

typedef struct _RygelTrackerMetadataValues RygelTrackerMetadataValues;
typedef struct _RygelTrackerMetadataValuesClass RygelTrackerMetadataValuesClass;
typedef struct _RygelTrackerMetadataValuesPrivate RygelTrackerMetadataValuesPrivate;

#define RYGEL_TRACKER_TYPE_TITLES (rygel_tracker_titles_get_type ())
#define RYGEL_TRACKER_TITLES(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), RYGEL_TRACKER_TYPE_TITLES, RygelTrackerTitles))
#define RYGEL_TRACKER_TITLES_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), RYGEL_TRACKER_TYPE_TITLES, RygelTrackerTitlesClass))
#define RYGEL_TRACKER_IS_TITLES(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), RYGEL_TRACKER_TYPE_TITLES))
#define RYGEL_TRACKER_IS_TITLES_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), RYGEL_TRACKER_TYPE_TITLES))
#define RYGEL_TRACKER_TITLES_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), RYGEL_TRACKER_TYPE_TITLES, RygelTrackerTitlesClass))

typedef struct _RygelTrackerTitles RygelTrackerTitles;
typedef struct _RygelTrackerTitlesClass RygelTrackerTitlesClass;
typedef struct _RygelTrackerTitlesPrivate RygelTrackerTitlesPrivate;
#define _g_free0(var) (var = (g_free (var), NULL))

struct _RygelTrackerMetadataContainer {
	RygelSimpleContainer parent_instance;
	RygelTrackerMetadataContainerPrivate * priv;
	RygelTrackerItemFactory* item_factory;
	RygelTrackerQueryTriplets* triplets;
};

struct _RygelTrackerMetadataContainerClass {
	RygelSimpleContainerClass parent_class;
	RygelTrackerSelectionQuery* (*create_query) (RygelTrackerMetadataContainer* self);
	RygelTrackerSearchContainer* (*create_container) (RygelTrackerMetadataContainer* self, const gchar* id, const gchar* title, const gchar* value);
	gchar* (*create_id_for_title) (RygelTrackerMetadataContainer* self, const gchar* title);
	gchar* (*create_title_for_value) (RygelTrackerMetadataContainer* self, const gchar* value);
	gchar* (*create_filter) (RygelTrackerMetadataContainer* self, const gchar* variable, const gchar* value);
};

struct _RygelTrackerMetadataValues {
	RygelTrackerMetadataContainer parent_instance;
	RygelTrackerMetadataValuesPrivate * priv;
};

struct _RygelTrackerMetadataValuesClass {
	RygelTrackerMetadataContainerClass parent_class;
};

struct _RygelTrackerTitles {
	RygelTrackerMetadataValues parent_instance;
	RygelTrackerTitlesPrivate * priv;
};

struct _RygelTrackerTitlesClass {
	RygelTrackerMetadataValuesClass parent_class;
};


static gpointer rygel_tracker_titles_parent_class = NULL;

GType rygel_tracker_metadata_container_get_type (void) G_GNUC_CONST;
gpointer rygel_tracker_query_ref (gpointer instance);
void rygel_tracker_query_unref (gpointer instance);
GParamSpec* rygel_tracker_param_spec_query (const gchar* name, const gchar* nick, const gchar* blurb, GType object_type, GParamFlags flags);
void rygel_tracker_value_set_query (GValue* value, gpointer v_object);
void rygel_tracker_value_take_query (GValue* value, gpointer v_object);
gpointer rygel_tracker_value_get_query (const GValue* value);
GType rygel_tracker_query_get_type (void) G_GNUC_CONST;
GType rygel_tracker_selection_query_get_type (void) G_GNUC_CONST;
GType rygel_tracker_search_container_get_type (void) G_GNUC_CONST;
gpointer rygel_tracker_item_factory_ref (gpointer instance);
void rygel_tracker_item_factory_unref (gpointer instance);
GParamSpec* rygel_tracker_param_spec_item_factory (const gchar* name, const gchar* nick, const gchar* blurb, GType object_type, GParamFlags flags);
void rygel_tracker_value_set_item_factory (GValue* value, gpointer v_object);
void rygel_tracker_value_take_item_factory (GValue* value, gpointer v_object);
gpointer rygel_tracker_value_get_item_factory (const GValue* value);
GType rygel_tracker_item_factory_get_type (void) G_GNUC_CONST;
GType rygel_tracker_query_triplets_get_type (void) G_GNUC_CONST;
GType rygel_tracker_metadata_values_get_type (void) G_GNUC_CONST;
GType rygel_tracker_titles_get_type (void) G_GNUC_CONST;
enum  {
	RYGEL_TRACKER_TITLES_DUMMY_PROPERTY
};
RygelTrackerTitles* rygel_tracker_titles_new (RygelMediaContainer* parent, RygelTrackerItemFactory* item_factory);
RygelTrackerTitles* rygel_tracker_titles_construct (GType object_type, RygelMediaContainer* parent, RygelTrackerItemFactory* item_factory);
RygelTrackerMetadataValues* rygel_tracker_metadata_values_construct (GType object_type, const gchar* id, RygelMediaContainer* parent, const gchar* title, RygelTrackerItemFactory* item_factory, const gchar* property, const gchar* child_class);
static gchar* rygel_tracker_titles_real_create_title_for_value (RygelTrackerMetadataContainer* base, const gchar* value);
static gchar* rygel_tracker_titles_real_create_filter (RygelTrackerMetadataContainer* base, const gchar* variable, const gchar* value);
gchar* rygel_tracker_query_escape_regex (const gchar* literal);
gchar* rygel_tracker_metadata_container_create_title_for_value (RygelTrackerMetadataContainer* self, const gchar* value);

static const gchar* RYGEL_TRACKER_TITLES_KEY_CHAIN[2] = {"dc:title", NULL};

RygelTrackerTitles* rygel_tracker_titles_construct (GType object_type, RygelMediaContainer* parent, RygelTrackerItemFactory* item_factory) {
	RygelTrackerTitles * self = NULL;
	RygelMediaContainer* _tmp0_;
	const gchar* _tmp1_;
	gchar* _tmp2_;
	gchar* _tmp3_;
	RygelMediaContainer* _tmp4_;
	const gchar* _tmp5_ = NULL;
	RygelTrackerItemFactory* _tmp6_;
	g_return_val_if_fail (parent != NULL, NULL);
	g_return_val_if_fail (item_factory != NULL, NULL);
	_tmp0_ = parent;
	_tmp1_ = ((RygelMediaObject*) _tmp0_)->id;
	_tmp2_ = g_strconcat (_tmp1_, "Titles", NULL);
	_tmp3_ = _tmp2_;
	_tmp4_ = parent;
	_tmp5_ = _ ("Titles");
	_tmp6_ = item_factory;
	self = (RygelTrackerTitles*) rygel_tracker_metadata_values_construct (object_type, _tmp3_, _tmp4_, _tmp5_, _tmp6_, "dc:title", NULL);
	_g_free0 (_tmp3_);
	return self;
}


RygelTrackerTitles* rygel_tracker_titles_new (RygelMediaContainer* parent, RygelTrackerItemFactory* item_factory) {
	return rygel_tracker_titles_construct (RYGEL_TRACKER_TYPE_TITLES, parent, item_factory);
}


static gchar* g_unichar_to_string (gunichar self) {
	gchar* result = NULL;
	gchar* _tmp0_ = NULL;
	gchar* str;
	const gchar* _tmp1_;
	_tmp0_ = g_new0 (gchar, 7);
	str = (gchar*) _tmp0_;
	_tmp1_ = str;
	g_unichar_to_utf8 (self, _tmp1_);
	result = str;
	return result;
}


static gchar* rygel_tracker_titles_real_create_title_for_value (RygelTrackerMetadataContainer* base, const gchar* value) {
	RygelTrackerTitles * self;
	gchar* result = NULL;
	const gchar* _tmp0_;
	gunichar _tmp1_ = 0U;
	gunichar c;
	gunichar _tmp2_;
	gboolean _tmp3_ = FALSE;
	gunichar _tmp4_;
	gchar* _tmp5_ = NULL;
	gchar* _tmp6_;
	gchar* _tmp7_ = NULL;
	gchar* _tmp8_;
	self = (RygelTrackerTitles*) base;
	g_return_val_if_fail (value != NULL, NULL);
	_tmp0_ = value;
	_tmp1_ = g_utf8_get_char_validated (_tmp0_, (gssize) (-1));
	c = _tmp1_;
	_tmp2_ = c;
	_tmp3_ = G_UNLIKELY (_tmp2_ < ((gunichar) 0));
	if (_tmp3_) {
		result = NULL;
		return result;
	}
	_tmp4_ = c;
	_tmp5_ = g_unichar_to_string (_tmp4_);
	_tmp6_ = _tmp5_;
	_tmp7_ = g_utf8_strup (_tmp6_, (gssize) (-1));
	_tmp8_ = _tmp7_;
	_g_free0 (_tmp6_);
	result = _tmp8_;
	return result;
}


static gchar* rygel_tracker_titles_real_create_filter (RygelTrackerMetadataContainer* base, const gchar* variable, const gchar* value) {
	RygelTrackerTitles * self;
	gchar* result = NULL;
	const gchar* _tmp0_;
	gchar* _tmp1_ = NULL;
	gchar* _tmp2_;
	gchar* _tmp3_ = NULL;
	gchar* _tmp4_;
	gchar* title;
	const gchar* _tmp5_;
	gchar* _tmp6_;
	gchar* _tmp7_;
	gchar* _tmp8_;
	gchar* _tmp9_;
	gchar* _tmp10_;
	gchar* _tmp11_;
	gchar* _tmp12_;
	gchar* _tmp13_;
	self = (RygelTrackerTitles*) base;
	g_return_val_if_fail (variable != NULL, NULL);
	g_return_val_if_fail (value != NULL, NULL);
	_tmp0_ = value;
	_tmp1_ = rygel_tracker_metadata_container_create_title_for_value ((RygelTrackerMetadataContainer*) self, _tmp0_);
	_tmp2_ = _tmp1_;
	_tmp3_ = rygel_tracker_query_escape_regex (_tmp2_);
	_tmp4_ = _tmp3_;
	_g_free0 (_tmp2_);
	title = _tmp4_;
	_tmp5_ = variable;
	_tmp6_ = g_strconcat ("regex(", _tmp5_, NULL);
	_tmp7_ = _tmp6_;
	_tmp8_ = g_strconcat (_tmp7_, ", \"^", NULL);
	_tmp9_ = _tmp8_;
	_tmp10_ = g_strconcat (_tmp9_, title, NULL);
	_tmp11_ = _tmp10_;
	_tmp12_ = g_strconcat (_tmp11_, "\", \"i\")", NULL);
	_tmp13_ = _tmp12_;
	_g_free0 (_tmp11_);
	_g_free0 (_tmp9_);
	_g_free0 (_tmp7_);
	result = _tmp13_;
	_g_free0 (title);
	return result;
}


static void rygel_tracker_titles_class_init (RygelTrackerTitlesClass * klass) {
	rygel_tracker_titles_parent_class = g_type_class_peek_parent (klass);
	RYGEL_TRACKER_METADATA_CONTAINER_CLASS (klass)->create_title_for_value = rygel_tracker_titles_real_create_title_for_value;
	RYGEL_TRACKER_METADATA_CONTAINER_CLASS (klass)->create_filter = rygel_tracker_titles_real_create_filter;
}


static void rygel_tracker_titles_instance_init (RygelTrackerTitles * self) {
}


/**
 * Container providing a title-based hierarchy.
 *
 * Under each category container, add a container providing a title-based
 * hierarchy: One container for each unique starting character of all the titles
 * available for the contegory in question. Something like this:
 *
 * Music
 *   |
 *   |----> Genre
 *           |..
 *   ^
 *   |----> Titles
 *           |
 *           |---> A
 *                 |
 *                 |--> Alpha
 *                 |--> alright
 *           ^
 *           |---> B
 *                 |
 *                 |--> Bravo
 *                 |--> brave
 *                 |..
 *           ^
 *   ^       |..
 *   |..
 */
GType rygel_tracker_titles_get_type (void) {
	static volatile gsize rygel_tracker_titles_type_id__volatile = 0;
	if (g_once_init_enter (&rygel_tracker_titles_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (RygelTrackerTitlesClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) rygel_tracker_titles_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (RygelTrackerTitles), 0, (GInstanceInitFunc) rygel_tracker_titles_instance_init, NULL };
		GType rygel_tracker_titles_type_id;
		rygel_tracker_titles_type_id = g_type_register_static (RYGEL_TRACKER_TYPE_METADATA_VALUES, "RygelTrackerTitles", &g_define_type_info, 0);
		g_once_init_leave (&rygel_tracker_titles_type_id__volatile, rygel_tracker_titles_type_id);
	}
	return rygel_tracker_titles_type_id__volatile;
}



