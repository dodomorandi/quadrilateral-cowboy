cmake_minimum_required(VERSION 3.0)
project(Quadrilateral_Cowboy)
set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${CMAKE_SOURCE_DIR}/cmake/modules/")

set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -m32")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -m32")

find_package(Threads REQUIRED)
find_package(OpenAL REQUIRED)
find_package(OpenGL REQUIRED)
find_package(OggVorbis REQUIRED)
find_package(SDL2 REQUIRED)
find_package(Flite REQUIRED)

add_definitions(-DID_GL_HARDLINK=1 -DUSE_SDL=1 -D_D3XP=1)

add_library(
        doomlib
        cm/CollisionModel_contacts.cpp
        cm/CollisionModel_contents.cpp
        cm/CollisionModel_debug.cpp
        cm/CollisionModel_files.cpp
        cm/CollisionModel_load.cpp
        cm/CollisionModel_rotate.cpp
        cm/CollisionModel_trace.cpp
        cm/CollisionModel_translate.cpp
        framework/CmdSystem.cpp
        framework/Common.cpp
        framework/Compressor.cpp
        framework/Console.cpp
        framework/CVarSystem.cpp
        framework/DeclAF.cpp
        framework/DeclEntityDef.cpp
        framework/DeclFX.cpp
        framework/DeclManager.cpp
        framework/DeclParticle.cpp
        framework/DeclPDA.cpp
        framework/DeclSkin.cpp
        framework/DeclTable.cpp
        framework/DemoFile.cpp
        framework/EditField.cpp
        framework/EventLoop.cpp
        framework/File.cpp
        framework/FileSystem.cpp
        framework/KeyInput.cpp
        framework/Session.cpp
        framework/Session_menu.cpp
        framework/Unzip.cpp
        framework/UsercmdGen.cpp
        framework/async/AsyncClient.cpp
        framework/async/AsyncNetwork.cpp
        framework/async/AsyncServer.cpp
        framework/async/MsgChannel.cpp
        framework/async/NetworkSystem.cpp
        framework/async/ServerScan.cpp
        renderer/Cinematic.cpp
        renderer/draw_arb.cpp
        renderer/draw_arb2.cpp
        renderer/cg_explicit.cpp
        renderer/draw_common.cpp
        renderer/draw_nv10.cpp
        renderer/draw_nv20.cpp
        renderer/draw_r200.cpp
        renderer/GuiModel.cpp
        renderer/Image_files.cpp
        renderer/Image_init.cpp
        renderer/Image_load.cpp
        renderer/Image_process.cpp
        renderer/Image_program.cpp
        renderer/Interaction.cpp
        renderer/Material.cpp
        renderer/MegaTexture.cpp
        renderer/Model.cpp
        renderer/Model_ase.cpp
        renderer/Model_beam.cpp
        renderer/Model_liquid.cpp
        renderer/Model_lwo.cpp
        renderer/Model_ma.cpp
        renderer/Model_md3.cpp
        renderer/Model_md5.cpp
        renderer/Model_prt.cpp
        renderer/Model_sprite.cpp
        renderer/ModelDecal.cpp
        renderer/ModelManager.cpp
        renderer/ModelOverlay.cpp
        renderer/RenderEntity.cpp
        renderer/RenderSystem.cpp
        renderer/RenderSystem_init.cpp
        renderer/RenderWorld.cpp
        renderer/RenderWorld_demo.cpp
        renderer/RenderWorld_load.cpp
        renderer/RenderWorld_portals.cpp
        renderer/tr_backend.cpp
        renderer/tr_deform.cpp
        renderer/tr_font.cpp
        renderer/tr_guisurf.cpp
        renderer/tr_light.cpp
        renderer/tr_lightrun.cpp
        renderer/tr_main.cpp
        renderer/tr_orderIndexes.cpp
        renderer/tr_polytope.cpp
        renderer/tr_render.cpp
        renderer/tr_rendertools.cpp
        renderer/tr_shadowbounds.cpp
        renderer/tr_stencilshadow.cpp
        renderer/tr_subview.cpp
        renderer/tr_trace.cpp
        renderer/tr_trisurf.cpp
        renderer/tr_turboshadow.cpp
        renderer/VertexCache.cpp
        renderer/jpeg-6/jcapimin.c
        renderer/jpeg-6/jccoefct.c
        renderer/jpeg-6/jccolor.c
        renderer/jpeg-6/jcdctmgr.c
        renderer/jpeg-6/jchuff.c
        renderer/jpeg-6/jcinit.c
        renderer/jpeg-6/jcmainct.c
        renderer/jpeg-6/jcmarker.c
        renderer/jpeg-6/jcmaster.c
        renderer/jpeg-6/jcomapi.c
        renderer/jpeg-6/jcparam.c
        renderer/jpeg-6/jcphuff.c
        renderer/jpeg-6/jcprepct.c
        renderer/jpeg-6/jcsample.c
        renderer/jpeg-6/jdapimin.c
        renderer/jpeg-6/jdapistd.c
        renderer/jpeg-6/jdatadst.c
        renderer/jpeg-6/jdatasrc.c
        renderer/jpeg-6/jdcoefct.c
        renderer/jpeg-6/jdcolor.c
        renderer/jpeg-6/jddctmgr.c
        renderer/jpeg-6/jdhuff.c
        renderer/jpeg-6/jdinput.c
        renderer/jpeg-6/jdmainct.c
        renderer/jpeg-6/jdmarker.c
        renderer/jpeg-6/jdmaster.c
        renderer/jpeg-6/jdmerge.c
        renderer/jpeg-6/jdphuff.c
        renderer/jpeg-6/jdpostct.c
        renderer/jpeg-6/jdsample.c
        renderer/jpeg-6/jdtrans.c
        renderer/jpeg-6/jerror.c
        renderer/jpeg-6/jfdctflt.c
        renderer/jpeg-6/jfdctfst.c
        renderer/jpeg-6/jfdctint.c
        renderer/jpeg-6/jidctflt.c
        renderer/jpeg-6/jidctfst.c
        renderer/jpeg-6/jidctint.c
        renderer/jpeg-6/jidctred.c
        renderer/jpeg-6/jmemmgr.c
        renderer/jpeg-6/jmemnobs.c
        renderer/jpeg-6/jquant1.c
        renderer/jpeg-6/jquant2.c
        renderer/jpeg-6/jutils.c
        # sound/snd_cache.cpp
        # sound/snd_decoder.cpp
        # sound/snd_efxfile.cpp
        # sound/snd_emitter.cpp
        # sound/snd_shader.cpp
        # sound/snd_system.cpp
        # sound/snd_wavefile.cpp
        # sound/snd_world.cpp
        sys/events.cpp
        sys/glimp.cpp
        sys/sys_local.cpp
        sys/linux/sound.h
        sys/linux/glimp_local.h.m4
        sys/linux/oss/include/midi_core.h
        sys/linux/oss/include/audio_core.h
        sys/linux/oss/include/mixer_core.h
        sys/linux/oss/include/sys/soundcard.h
        sys/linux/oss/include/sys/ultrasound.h
        sys/linux/glimp_glenum.h
        sys/linux/local.h
        sys/linux/libXNVCtrl/extutil.h
        sys/linux/libXNVCtrl/nv_control.h
        sys/linux/libXNVCtrl/NVCtrl.h
        sys/linux/libXNVCtrl/NVCtrlLib.h
        sys/linux/glimp_dlopen.cpp.m4
        sys/linux/main.cpp
        sys/linux/sound_alsa.cpp
        sys/linux/glimp_stub.cpp.m4
        sys/linux/glimp_logging.cpp.m4
        #sys/linux/dedicated.cpp
        sys/linux/sound.cpp
        sys/linux/glimp.cpp
        sys/linux/input.cpp
        sys/linux/stack.cpp
        sys/posix/posix_input.cpp 
        sys/posix/posix_main.cpp 
        sys/posix/posix_net.cpp
        sys/posix/posix_public.h
        sys/posix/posix_signal.cpp
        sys/posix/posix_threads.cpp
        tools/compilers/aas/AASBuild.cpp
        tools/compilers/aas/AASBuild_file.cpp
        tools/compilers/aas/AASBuild_gravity.cpp
        tools/compilers/aas/AASBuild_ledge.cpp
        tools/compilers/aas/AASBuild_merge.cpp
        tools/compilers/aas/AASCluster.cpp
        tools/compilers/aas/AASFile.cpp
        tools/compilers/aas/AASFile_optimize.cpp
        tools/compilers/aas/AASFile_sample.cpp
        tools/compilers/aas/AASFileManager.cpp
        tools/compilers/aas/AASReach.cpp
        tools/compilers/aas/Brush.cpp
        tools/compilers/aas/BrushBSP.cpp
        tools/compilers/dmap/dmap.cpp
        tools/compilers/dmap/facebsp.cpp
        tools/compilers/dmap/gldraw.cpp
        tools/compilers/dmap/glfile.cpp
        tools/compilers/dmap/leakfile.cpp
        tools/compilers/dmap/map.cpp
        tools/compilers/dmap/optimize.cpp
        tools/compilers/dmap/optimize_gcc.cpp
        tools/compilers/dmap/output.cpp
        tools/compilers/dmap/portals.cpp
        tools/compilers/dmap/shadowopt3.cpp
        tools/compilers/dmap/tritjunction.cpp
        tools/compilers/dmap/tritools.cpp
        tools/compilers/dmap/ubrush.cpp
        tools/compilers/dmap/usurface.cpp
        tools/compilers/renderbump/renderbump.cpp
        tools/compilers/roqvq/codec.cpp
        tools/compilers/roqvq/NSBitmapImageRep.cpp
        tools/compilers/roqvq/roq.cpp
        tools/compilers/roqvq/roqParam.cpp
        ui/BindWindow.cpp
        ui/ChoiceWindow.cpp
        ui/DeviceContext.cpp
        ui/EditWindow.cpp
        ui/FieldWindow.cpp
        ui/GameBearShootWindow.cpp
        ui/GameBustOutWindow.cpp
        ui/gamelaserduckwindow.cpp
        ui/GameSSDWindow.cpp
        ui/GuiScript.cpp
        ui/ListGUI.cpp
        ui/ListWindow.cpp
        ui/MarkerWindow.cpp
        ui/RegExp.cpp
        ui/RenderWindow.cpp
        ui/SimpleWindow.cpp
        ui/SliderWindow.cpp
        ui/UserInterface.cpp
        ui/Window.cpp
        ui/Winvar.cpp
        sound_oal/efxlib.h
        sound_oal/snd_cache.cpp
        sound_oal/snd_decoder.cpp
        sound_oal/snd_efxfile.cpp
        sound_oal/snd_emitter.cpp
        sound_oal/snd_local.h
        sound_oal/snd_shader.cpp
        sound_oal/snd_system.cpp
        sound_oal/snd_wavefile.cpp
        sound_oal/snd_world.cpp
        sound_oal/sound.h
)
target_include_directories(doomlib PRIVATE "${PROJECT_SOURCE_DIR}/sys/linux/oss/include" ${SDL2_INCLUDE_DIR} ${FLITE_INCLUDE_DIR})
target_link_libraries(doomlib idlib ${SDL2_LIBRARY} ${FLITE_LIBRARIES} flite_cmu_us_rms flite_usenglish flite_cmulex)

add_library(
        typeinfo
        # TypeInfo/main.cpp
        TypeInfo/TypeInfoGen.cpp
        TypeInfo/TypeInfoGen.h
        framework/CmdSystem.cpp
        framework/CVarSystem.cpp
        framework/File.cpp
        framework/FileSystem.cpp
        framework/Unzip.cpp
        framework/CmdSystem.h
        framework/CVarSystem.h
        framework/File.h
        framework/FileSystem.h
        framework/Licensee.h
        framework/Unzip.h
)

add_subdirectory(idlib)
#add_subdirectory(game)
add_subdirectory(d3xp)
