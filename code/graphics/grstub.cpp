

#include "anim/animplay.h"
#include "anim/packunpack.h"
#include "bmpman/bmpman.h"
#include "ddsutils/ddsutils.h"
#include "globalincs/systemvars.h"
#include "graphics/2d.h"
#include "graphics/grinternal.h"
#include "jpgutils/jpgutils.h"
#include "model/model.h"
#include "pcxutils/pcxutils.h"
#include "pngutils/pngutils.h"
#include "tgautils/tgautils.h"

#define BMPMAN_INTERNAL
#include "bmpman/bm_internal.h"


uint gr_stub_lock()
{
	return 1;
}

// NOTE: should return a failure
int gr_stub_create_buffer()
{
	return -1;
}

// NOTE: should return a failure
bool gr_stub_pack_buffer(const int buffer_id, vertex_buffer *vb)
{
	return false;
}

// NOTE: should return a failure
bool gr_stub_config_buffer(const int buffer_id, vertex_buffer *vb, bool update_ibuffer_only)
{
	return false;
}

int	gr_stub_make_light(light *light, int idx, int priority)
{
	return 0;
}

int gr_stub_preload(int bitmap_num, int is_aabitmap)
{
	return 0;
}

int gr_stub_save_screen()
{
	return 1;
}

int gr_stub_tcache_set(int bitmap_id, int bitmap_type, float *u_scale, float *v_scale, int tex_unit = 0)
{
	return 0;
}

int gr_stub_zbuffer_get()
{
	return 0;
}

int gr_stub_zbuffer_set(int mode)
{
	return 0;
}

void gr_set_fill_mode_stub(int mode)
{
}

void gr_stub_aabitmap_ex(int x,int y,int w,int h,int sx,int sy,int resize_mode,bool mirror)
{
}

void gr_stub_aabitmap(int x, int y,int resize_mode, bool mirror)
{
}

void gr_stub_aaline(vertex *v1, vertex *v2)
{
}

void gr_stub_activate(int active)
{
}

void gr_stub_bitmap_ex(int x, int y, int w, int h, int sx, int sy, int resize_mode)
{
}

void gr_stub_bitmap(int x, int y)
{
}

void gr_stub_center_alpha( int type)
{
}

void gr_stub_set_thrust_scale(float scale)
{
}

void gr_stub_circle( int xc, int yc, int d, int resize_mode )
{
}

void gr_stub_unfilled_circle( int xc, int yc, int d, int resize_mode )
{
}

void gr_stub_cleanup(int minimize)
{
}

void gr_stub_clear()
{
}

void gr_stub_cross_fade(int bmap1, int bmap2, int x1, int y1, int x2, int y2, float pct, int resize_mode)
{
}

void gr_stub_curve(int xc, int yc, int r, int direction, int resize_mode)
{
}

void gr_stub_destroy_buffer(int idx)
{
}

void gr_stub_destroy_light(int idx)
{
}

void gr_stub_end_clip_plane()
{
}

void gr_stub_end_instance_matrix()
{
}

void gr_stub_end_projection_matrix()
{
}

void gr_stub_end_view_matrix()
{
}

void gr_stub_flash_alpha(int r, int g, int b, int a)
{
}

void gr_stub_flash(int r, int g, int b)
{
}

void gr_stub_flip()
{
}

void gr_stub_fog_set(int fog_mode, int r, int g, int b, float fog_near, float fog_far)
{
}

void gr_stub_free_screen(int id)
{
}

void gr_stub_get_region(int front, int w, int h, ubyte *data)
{
}

void gr_stub_gradient(int x1,int y1,int x2,int y2, int resize_mode)
{
}

void gr_stub_line(int x1,int y1,int x2,int y2, int resize_mode = GR_RESIZE_NONE)
{
}

void gr_stub_modify_light(light* light, int idx, int priority)
{
}

void gr_stub_pixel(int x, int y, int resize_mode)
{
}

void gr_stub_pop_scale_matrix()
{
}

void gr_stub_pop_texture_matrix(int unit)
{
}

void gr_stub_preload_init()
{
}

void gr_stub_print_screen(const char *filename)
{
}

void gr_stub_push_scale_matrix(const vec3d *scale_factor)
{
}

void gr_stub_push_texture_matrix(int unit)
{
}

void gr_stub_rect(int x, int y, int w, int h, int resize_mode)
{
}

void gr_stub_render_buffer(int start, const vertex_buffer *bufferp, size_t texi, int flags)
{
}

void gr_stub_reset_clip()
{
}

void gr_stub_reset_lighting()
{
}

void gr_stub_restore_screen(int id)
{
}

void gr_stub_save_mouse_area(int x, int y, int w, int h)
{
}

void gr_stub_scaler(vertex *va, vertex *vb, bool bw_bitmap )
{
}

void gr_stub_set_additive_tex_env()
{
}

void gr_stub_set_buffer(int idx)
{
}

void gr_stub_update_buffer_object(int handle, size_t size, void* data)
{

}

void gr_stub_update_transform_buffer(void* data, size_t size)
{

}

void gr_stub_set_transform_buffer_offset(size_t offset)
{

}

int gr_stub_create_stream_buffer()
{
	return -1;
}

void gr_stub_render_stream_buffer(int buffer_handle, size_t offset, size_t n_verts, int flags)
{
}

void gr_stub_set_clear_color(int r, int g, int b)
{
}

void gr_stub_set_clip(int x, int y, int w, int h, int resize_mode)
{
}

int gr_stub_set_cull(int cull)
{
	return 0;
}

int gr_stub_set_color_buffer(int mode)
{
	return 0;
}

void gr_stub_set_gamma(float gamma)
{
}

void gr_stub_set_lighting(bool set, bool state)
{
}

void gr_stub_set_light_factor(float factor)
{
}

void gr_stub_set_light(light *light)
{
}

void gr_stub_set_projection_matrix(float fov, float aspect, float z_near, float z_far)
{
}

void gr_stub_set_tex_env_scale(float scale)
{
}

void gr_stub_set_texture_addressing(int mode)
{
}

void gr_stub_set_view_matrix(const vec3d *pos, const matrix* orient)
{
}

void gr_stub_start_clip_plane()
{
}

void gr_stub_start_instance_angles(const vec3d *pos, const angles *rotation)
{
}

void gr_stub_start_instance_matrix(const vec3d *offset, const matrix *rotation)
{
}

void gr_stub_string( float sx, float sy, const char *s, int resize_mode = GR_RESIZE_NONE, int length = -1)
{
}

void gr_stub_stuff_fog_coord(vertex *v)
{
}

void gr_stub_stuff_secondary_color(vertex *v, ubyte fr, ubyte fg, ubyte fb)
{
}

void gr_stub_tmapper( int nverts, vertex **verts, uint flags )
{
}

void gr_stub_render( int nverts, vertex *verts, uint flags )
{
}

void gr_stub_render_effect( int nverts, vertex *verts, float *radius_list, uint flag)
{
}

void gr_stub_translate_texture_matrix(int unit, const vec3d *shift)
{
}

void gr_stub_zbias_stub(int bias)
{
}

void gr_stub_zbuffer_clear(int mode)
{
}

int gr_stub_stencil_set(int mode)
{
	return 0;
}

void gr_stub_stencil_clear()
{
}

int gr_stub_alpha_mask_set(int mode, float alpha)
{
	return 0;
}

/*void gr_stub_shade(int x,int y,int w,int h)
{
}*/

void gr_stub_post_process_set_effect(const char *name, int x)
{
}

void gr_stub_post_process_set_defaults()
{
}

void gr_stub_post_process_save_zbuffer()
{
}

void gr_stub_post_process_blur_shadow_map()
{
}

void gr_stub_post_process_begin()
{
}

void gr_stub_post_process_end()
{
}

void gr_stub_scene_texture_begin()
{
}

void gr_stub_scene_texture_end()
{
}

void gr_stub_copy_effect_texture()
{
}

void gr_stub_deferred_lighting_begin()
{
}

void gr_stub_deferred_lighting_end()
{
}

void gr_stub_deferred_lighting_finish()
{
}

void gr_stub_set_ambient_light(int red, int green, int blue)
{
}

void gr_stub_set_texture_panning(float u, float v, bool enable)
{
}

void gr_stub_set_line_width(float width)
{
}

void gr_stub_draw_htl_line(const vec3d *start, const vec3d *end)
{
}

void gr_stub_draw_htl_sphere(float rad)
{
}

void gr_stub_draw_line_list(const colored_vector *lines, int num)
{
}

void gr_stub_clear_states()
{
}

void gr_stub_update_texture(int bitmap_handle, int bpp, const ubyte *data, int width, int height)
{
}

void gr_stub_get_bitmap_from_texture(void* data_out, int bitmap_num)
{

}

int gr_stub_bm_make_render_target(int n, int *width, int *height, int *bpp, int *mm_lvl, int flags)
{
	return 0;
}

int gr_stub_bm_set_render_target(int n, int face)
{
	return 0;
}

void gr_stub_bm_create(int n)
{
}

void gr_stub_bm_free_data(int n, bool release)
{
}

void gr_stub_bm_init(int n)
{
}

void gr_stub_bm_page_in_start()
{
}

bool gr_stub_bm_data(int n, bitmap* bm)
{
	return true;
}

int gr_stub_maybe_create_shader(shader_type shader_t, unsigned int flags) {
	return -1;
}

void gr_stub_set_animated_effect(int effect, float timer)
{

}

void gr_stub_set_team_color(const team_color *colors) {
}

void gr_stub_shadow_map_start(const matrix4 *shadow_view_matrix, const matrix* light_matrix)
{
}

void gr_stub_shadow_map_end()
{
}

bool gr_stub_init() 
{
	if (gr_screen.res != GR_640) {
		gr_screen.res = GR_640;
		gr_screen.max_w = 640;
		gr_screen.max_h = 480;
	}

	Gr_red.bits = 8;
	Gr_red.shift = 16;
	Gr_red.scale = 1;
	Gr_red.mask = 0xff0000;
	Gr_t_red = Gr_red;

	Gr_green.bits = 8;
	Gr_green.shift = 8;
	Gr_green.scale = 1;
	Gr_green.mask = 0xff00;
	Gr_t_green = Gr_green;

	Gr_blue.bits = 8;
	Gr_blue.shift = 0;
	Gr_blue.scale = 1;
	Gr_blue.mask = 0xff;
	Gr_t_blue = Gr_blue;

	// function pointers...
	gr_screen.gf_flip				= gr_stub_flip;
	gr_screen.gf_set_clip			= gr_stub_set_clip;
	gr_screen.gf_reset_clip			= gr_stub_reset_clip;
	
	gr_screen.gf_clear				= gr_stub_clear;
//	gr_screen.gf_bitmap				= gr_stub_bitmap;
	gr_screen.gf_bitmap_ex			= gr_stub_bitmap_ex;
	gr_screen.gf_aabitmap			= gr_stub_aabitmap;
	gr_screen.gf_aabitmap_ex		= gr_stub_aabitmap_ex;
	
//	gr_screen.gf_rect				= gr_stub_rect;
//	gr_screen.gf_shade				= gr_stub_shade;
	gr_screen.gf_string				= gr_stub_string;
	gr_screen.gf_circle				= gr_stub_circle;
	gr_screen.gf_unfilled_circle	= gr_stub_unfilled_circle;
	gr_screen.gf_curve				= gr_stub_curve;

	gr_screen.gf_line				= gr_stub_line;
	gr_screen.gf_aaline				= gr_stub_aaline;
	gr_screen.gf_pixel				= gr_stub_pixel;
	gr_screen.gf_scaler				= gr_stub_scaler;
	gr_screen.gf_tmapper			= gr_stub_tmapper;
	gr_screen.gf_render				= gr_stub_render;
	gr_screen.gf_render_effect		= gr_stub_render_effect;

	gr_screen.gf_gradient			= gr_stub_gradient;

	gr_screen.gf_print_screen		= gr_stub_print_screen;

	gr_screen.gf_flash				= gr_stub_flash;
	gr_screen.gf_flash_alpha		= gr_stub_flash_alpha;
	
	gr_screen.gf_zbuffer_get		= gr_stub_zbuffer_get;
	gr_screen.gf_zbuffer_set		= gr_stub_zbuffer_set;
	gr_screen.gf_zbuffer_clear		= gr_stub_zbuffer_clear;

	gr_screen.gf_stencil_set		= gr_stub_stencil_set;
	gr_screen.gf_stencil_clear		= gr_stub_stencil_clear;

	gr_screen.gf_alpha_mask_set		= gr_stub_alpha_mask_set;
	
	gr_screen.gf_save_screen		= gr_stub_save_screen;
	gr_screen.gf_restore_screen		= gr_stub_restore_screen;
	gr_screen.gf_free_screen		= gr_stub_free_screen;
	
	gr_screen.gf_set_gamma			= gr_stub_set_gamma;

	gr_screen.gf_fog_set			= gr_stub_fog_set;	

	// UnknownPlayer : Don't recognize this - MAY NEED DEBUGGING
	gr_screen.gf_get_region			= gr_stub_get_region;

	// now for the bitmap functions
	gr_screen.gf_bm_free_data			= gr_stub_bm_free_data;
	gr_screen.gf_bm_create				= gr_stub_bm_create;
	gr_screen.gf_bm_init				= gr_stub_bm_init;
	gr_screen.gf_bm_page_in_start		= gr_stub_bm_page_in_start;
	gr_screen.gf_bm_data				= gr_stub_bm_data;
	gr_screen.gf_bm_make_render_target	= gr_stub_bm_make_render_target;
	gr_screen.gf_bm_set_render_target	= gr_stub_bm_set_render_target;

	gr_screen.gf_set_cull			= gr_stub_set_cull;
	gr_screen.gf_set_color_buffer	= gr_stub_set_color_buffer;

	gr_screen.gf_cross_fade			= gr_stub_cross_fade;

	gr_screen.gf_tcache_set			= gr_stub_tcache_set;

	gr_screen.gf_set_clear_color	= gr_stub_set_clear_color;

	gr_screen.gf_preload			= gr_stub_preload;

	gr_screen.gf_push_texture_matrix		= gr_stub_push_texture_matrix;
	gr_screen.gf_pop_texture_matrix			= gr_stub_pop_texture_matrix;
	gr_screen.gf_translate_texture_matrix	= gr_stub_translate_texture_matrix;

	gr_screen.gf_set_texture_addressing	= gr_stub_set_texture_addressing;
	gr_screen.gf_zbias					= gr_stub_zbias_stub;
	gr_screen.gf_set_fill_mode			= gr_set_fill_mode_stub;
	gr_screen.gf_set_texture_panning	= gr_stub_set_texture_panning;

	gr_screen.gf_create_buffer		= gr_stub_create_buffer;
	gr_screen.gf_config_buffer		= gr_stub_config_buffer;
	gr_screen.gf_pack_buffer		= gr_stub_pack_buffer;
	gr_screen.gf_destroy_buffer		= gr_stub_destroy_buffer;
	gr_screen.gf_render_buffer		= gr_stub_render_buffer;
	gr_screen.gf_set_buffer			= gr_stub_set_buffer;

	gr_screen.gf_update_transform_buffer	= gr_stub_update_transform_buffer;
	gr_screen.gf_update_buffer_object		= gr_stub_update_buffer_object;
	gr_screen.gf_set_transform_buffer_offset	= gr_stub_set_transform_buffer_offset;

	gr_screen.gf_create_stream_buffer		= gr_stub_create_stream_buffer;
	gr_screen.gf_render_stream_buffer		= gr_stub_render_stream_buffer;

	gr_screen.gf_start_instance_matrix			= gr_stub_start_instance_matrix;
	gr_screen.gf_end_instance_matrix			= gr_stub_end_instance_matrix;
	gr_screen.gf_start_angles_instance_matrix	= gr_stub_start_instance_angles;

	gr_screen.gf_make_light			= gr_stub_make_light;
	gr_screen.gf_modify_light		= gr_stub_modify_light;
	gr_screen.gf_destroy_light		= gr_stub_destroy_light;
	gr_screen.gf_set_light			= gr_stub_set_light;
	gr_screen.gf_reset_lighting		= gr_stub_reset_lighting;
	gr_screen.gf_set_ambient_light	= gr_stub_set_ambient_light;

	gr_screen.gf_post_process_set_effect	= gr_stub_post_process_set_effect;
	gr_screen.gf_post_process_set_defaults	= gr_stub_post_process_set_defaults;

	gr_screen.gf_post_process_begin		= gr_stub_post_process_begin;
	gr_screen.gf_post_process_end		= gr_stub_post_process_end;
	gr_screen.gf_post_process_save_zbuffer	= gr_stub_post_process_save_zbuffer;

	gr_screen.gf_scene_texture_begin = gr_stub_scene_texture_begin;
	gr_screen.gf_scene_texture_end = gr_stub_scene_texture_end;
	gr_screen.gf_copy_effect_texture = gr_stub_copy_effect_texture;

	gr_screen.gf_deferred_lighting_begin = gr_stub_deferred_lighting_begin;
	gr_screen.gf_deferred_lighting_end = gr_stub_deferred_lighting_end;
	gr_screen.gf_deferred_lighting_finish = gr_stub_deferred_lighting_finish;

	gr_screen.gf_start_clip_plane	= gr_stub_start_clip_plane;
	gr_screen.gf_end_clip_plane		= gr_stub_end_clip_plane;

	gr_screen.gf_lighting			= gr_stub_set_lighting;
	gr_screen.gf_set_light_factor	= gr_stub_set_light_factor;

	gr_screen.gf_set_proj_matrix	= gr_stub_set_projection_matrix;
	gr_screen.gf_end_proj_matrix	= gr_stub_end_projection_matrix;

	gr_screen.gf_set_view_matrix	= gr_stub_set_view_matrix;
	gr_screen.gf_end_view_matrix	= gr_stub_end_view_matrix;

	gr_screen.gf_push_scale_matrix	= gr_stub_push_scale_matrix;
	gr_screen.gf_pop_scale_matrix	= gr_stub_pop_scale_matrix;
	gr_screen.gf_center_alpha		= gr_stub_center_alpha;
	gr_screen.gf_set_thrust_scale	= gr_stub_set_thrust_scale;
	
	gr_screen.gf_draw_line_list		= gr_stub_draw_line_list;

	gr_screen.gf_set_line_width		= gr_stub_set_line_width;

	gr_screen.gf_line_htl			= gr_stub_draw_htl_line;
	gr_screen.gf_sphere_htl			= gr_stub_draw_htl_sphere;

	gr_screen.gf_shadow_map_start	= gr_stub_shadow_map_start;
	gr_screen.gf_shadow_map_end		= gr_stub_shadow_map_end;

	gr_screen.gf_maybe_create_shader = gr_stub_maybe_create_shader;

	gr_screen.gf_set_animated_effect = gr_stub_set_animated_effect;

	gr_screen.gf_clear_states	= gr_stub_clear_states;

	gr_screen.gf_set_team_color		= gr_stub_set_team_color;

	gr_screen.gf_update_texture = gr_stub_update_texture;
	gr_screen.gf_get_bitmap_from_texture = gr_stub_get_bitmap_from_texture;
	return true;
}
