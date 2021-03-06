#############################################################################
# Makefile for building: ../bin/civil-cfd
# Generated by qmake (2.01a) (Qt 4.8.7) on: Mon May 23 22:26:26 2016
# Project:  gui.pro
# Template: app
# Command: /usr/lib/x86_64-linux-gnu/qt4/bin/qmake -o Makefile gui.pro
#############################################################################

####### Compiler, tools and options

CC            = gcc
CXX           = g++
DEFINES       = -DQT_GUI_LIB -DQT_CORE_LIB -DQT_SHARED
CFLAGS        = -m64 -pipe -g -Wall -W -D_REENTRANT $(DEFINES)
CXXFLAGS      = -m64 -pipe -pthread -fopenmp -g -Wall -W -D_REENTRANT $(DEFINES)
INCPATH       = -I/usr/share/qt4/mkspecs/linux-g++-64 -I. -I/usr/include/qt4/QtCore -I/usr/include/qt4/QtGui -I/usr/include/qt4 -I../src/mesh3d -I../src/solver3d -I. -I/usr/include/qt4 -I/usr/include/vtk-5.8 -I/opt/local/include/vtk-5.10 -I/usr/local/opt/vtk5/include/vtk-5.10 -I/usr/include/vtk-5.10 -I. -I.
LINK          = g++
LFLAGS        = -m64
LIBS          = $(SUBLIBS)  -L/usr/lib/x86_64-linux-gnu -L/usr/local/lib -L/opt/local/lib -L/opt/local/lib/vtk-5.10 -fopenmp -L/usr/local/opt/vtk5/lib/vtk-5.10 -L../lib -lsolver3d -lmesh3d -lm -lqhull -lvtkCommon -lvtksys -lQVTK -lvtkViews -lvtkWidgets -lvtkInfovis -lvtkRendering -lvtkGraphics -lvtkImaging -lvtkIO -lvtkFiltering -lvtkDICOMParser -lvtkalglib -lvtkverdict -lvtkmetaio -lvtkexoIIc -lvtkftgl -lvtkHybrid -lvtkVolumeRendering -lz -lquazip -lpetsc -lmpi -lQtGui -lQtCore -lpthread 
AR            = ar cqs
RANLIB        = 
QMAKE         = /usr/lib/x86_64-linux-gnu/qt4/bin/qmake
TAR           = tar -cf
COMPRESS      = gzip -9f
COPY          = cp -f
SED           = sed
COPY_FILE     = $(COPY)
COPY_DIR      = $(COPY) -r
STRIP         = strip
INSTALL_FILE  = install -m 644 -p
INSTALL_DIR   = $(COPY_DIR)
INSTALL_PROGRAM = install -m 755 -p
DEL_FILE      = rm -f
SYMLINK       = ln -f -s
DEL_DIR       = rmdir
MOVE          = mv -f
CHK_DIR_EXISTS= test -d
MKDIR         = mkdir -p

####### Output directory

OBJECTS_DIR   = ./

####### Files

SOURCES       = main.cpp \
		MainWindow.cpp \
		MeshDisplay.cpp \
		GeometryDisplay.cpp \
		Render.cpp \
		RenderDisplay.cpp \
		MainWindow_Boundaries.cpp \
		Boundary.cpp \
		BoundaryDisplay.cpp \
		Solver.cpp \
		ResultList.cpp \
		Visualize.cpp \
		VisualizeDisplay.cpp \
		Baffle.cpp \
		MainWindow_Baffles.cpp \
		qcustomplot.cpp \
		Visualize3D.cpp \
		Visualize3DDisplay.cpp \
		About.cpp \
		InspectDialog.cpp \
		Simulation.cpp moc_MainWindow.cpp \
		moc_Render.cpp \
		moc_Boundary.cpp \
		moc_SolverDialog.cpp \
		moc_Baffle.cpp \
		moc_qcustomplot.cpp \
		moc_About.cpp \
		moc_InspectDialog.cpp \
		qrc_gui.cpp
OBJECTS       = main.o \
		MainWindow.o \
		MeshDisplay.o \
		GeometryDisplay.o \
		Render.o \
		RenderDisplay.o \
		MainWindow_Boundaries.o \
		Boundary.o \
		BoundaryDisplay.o \
		Solver.o \
		ResultList.o \
		Visualize.o \
		VisualizeDisplay.o \
		Baffle.o \
		MainWindow_Baffles.o \
		qcustomplot.o \
		Visualize3D.o \
		Visualize3DDisplay.o \
		About.o \
		InspectDialog.o \
		Simulation.o \
		moc_MainWindow.o \
		moc_Render.o \
		moc_Boundary.o \
		moc_SolverDialog.o \
		moc_Baffle.o \
		moc_qcustomplot.o \
		moc_About.o \
		moc_InspectDialog.o \
		qrc_gui.o
DIST          = /usr/share/qt4/mkspecs/common/unix.conf \
		/usr/share/qt4/mkspecs/common/linux.conf \
		/usr/share/qt4/mkspecs/common/gcc-base.conf \
		/usr/share/qt4/mkspecs/common/gcc-base-unix.conf \
		/usr/share/qt4/mkspecs/common/g++-base.conf \
		/usr/share/qt4/mkspecs/common/g++-unix.conf \
		/usr/share/qt4/mkspecs/qconfig.pri \
		/usr/share/qt4/mkspecs/features/qt_functions.prf \
		/usr/share/qt4/mkspecs/features/qt_config.prf \
		/usr/share/qt4/mkspecs/features/exclusive_builds.prf \
		/usr/share/qt4/mkspecs/features/default_pre.prf \
		/usr/share/qt4/mkspecs/features/debug.prf \
		/usr/share/qt4/mkspecs/features/default_post.prf \
		/usr/share/qt4/mkspecs/features/shared.prf \
		/usr/share/qt4/mkspecs/features/unix/gdb_dwarf_index.prf \
		/usr/share/qt4/mkspecs/features/warn_on.prf \
		/usr/share/qt4/mkspecs/features/qt.prf \
		/usr/share/qt4/mkspecs/features/unix/thread.prf \
		/usr/share/qt4/mkspecs/features/moc.prf \
		/usr/share/qt4/mkspecs/features/resources.prf \
		/usr/share/qt4/mkspecs/features/uic.prf \
		/usr/share/qt4/mkspecs/features/yacc.prf \
		/usr/share/qt4/mkspecs/features/lex.prf \
		/usr/share/qt4/mkspecs/features/include_source_dir.prf \
		gui.pro
QMAKE_TARGET  = civil-cfd
DESTDIR       = ../bin/
TARGET        = ../bin/civil-cfd

first: all
####### Implicit rules

.SUFFIXES: .o .c .cpp .cc .cxx .C

.cpp.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.cc.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.cxx.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.C.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.c.o:
	$(CC) -c $(CFLAGS) $(INCPATH) -o "$@" "$<"

####### Build rules

all: Makefile $(TARGET)

$(TARGET): ui_civlcfd.h ui_render.h ui_boundary.h ui_sboundary.h ui_solver.h ui_inspect_cell.h ui_baffle.h ui_about.h $(OBJECTS)  
	@$(CHK_DIR_EXISTS) ../bin/ || $(MKDIR) ../bin/ 
	$(LINK) $(LFLAGS) -o $(TARGET) $(OBJECTS) $(OBJCOMP) $(LIBS)
	{ test -n "$(DESTDIR)" && DESTDIR="$(DESTDIR)" || DESTDIR=.; } && test $$(gdb --version | sed -e 's,[^0-9][^0-9]*\([0-9]\)\.\([0-9]\).*,\1\2,;q') -gt 72 && gdb --nx --batch --quiet -ex 'set confirm off' -ex "save gdb-index $$DESTDIR" -ex quit '$(TARGET)' && test -f $(TARGET).gdb-index && objcopy --add-section '.gdb_index=$(TARGET).gdb-index' --set-section-flags '.gdb_index=readonly' '$(TARGET)' '$(TARGET)' && rm -f $(TARGET).gdb-index || true

Makefile: gui.pro  /usr/share/qt4/mkspecs/linux-g++-64/qmake.conf /usr/share/qt4/mkspecs/common/unix.conf \
		/usr/share/qt4/mkspecs/common/linux.conf \
		/usr/share/qt4/mkspecs/common/gcc-base.conf \
		/usr/share/qt4/mkspecs/common/gcc-base-unix.conf \
		/usr/share/qt4/mkspecs/common/g++-base.conf \
		/usr/share/qt4/mkspecs/common/g++-unix.conf \
		/usr/share/qt4/mkspecs/qconfig.pri \
		/usr/share/qt4/mkspecs/features/qt_functions.prf \
		/usr/share/qt4/mkspecs/features/qt_config.prf \
		/usr/share/qt4/mkspecs/features/exclusive_builds.prf \
		/usr/share/qt4/mkspecs/features/default_pre.prf \
		/usr/share/qt4/mkspecs/features/debug.prf \
		/usr/share/qt4/mkspecs/features/default_post.prf \
		/usr/share/qt4/mkspecs/features/shared.prf \
		/usr/share/qt4/mkspecs/features/unix/gdb_dwarf_index.prf \
		/usr/share/qt4/mkspecs/features/warn_on.prf \
		/usr/share/qt4/mkspecs/features/qt.prf \
		/usr/share/qt4/mkspecs/features/unix/thread.prf \
		/usr/share/qt4/mkspecs/features/moc.prf \
		/usr/share/qt4/mkspecs/features/resources.prf \
		/usr/share/qt4/mkspecs/features/uic.prf \
		/usr/share/qt4/mkspecs/features/yacc.prf \
		/usr/share/qt4/mkspecs/features/lex.prf \
		/usr/share/qt4/mkspecs/features/include_source_dir.prf \
		/usr/lib/x86_64-linux-gnu/libQtGui.prl \
		/usr/lib/x86_64-linux-gnu/libQtCore.prl
	$(QMAKE) -o Makefile gui.pro
/usr/share/qt4/mkspecs/common/unix.conf:
/usr/share/qt4/mkspecs/common/linux.conf:
/usr/share/qt4/mkspecs/common/gcc-base.conf:
/usr/share/qt4/mkspecs/common/gcc-base-unix.conf:
/usr/share/qt4/mkspecs/common/g++-base.conf:
/usr/share/qt4/mkspecs/common/g++-unix.conf:
/usr/share/qt4/mkspecs/qconfig.pri:
/usr/share/qt4/mkspecs/features/qt_functions.prf:
/usr/share/qt4/mkspecs/features/qt_config.prf:
/usr/share/qt4/mkspecs/features/exclusive_builds.prf:
/usr/share/qt4/mkspecs/features/default_pre.prf:
/usr/share/qt4/mkspecs/features/debug.prf:
/usr/share/qt4/mkspecs/features/default_post.prf:
/usr/share/qt4/mkspecs/features/shared.prf:
/usr/share/qt4/mkspecs/features/unix/gdb_dwarf_index.prf:
/usr/share/qt4/mkspecs/features/warn_on.prf:
/usr/share/qt4/mkspecs/features/qt.prf:
/usr/share/qt4/mkspecs/features/unix/thread.prf:
/usr/share/qt4/mkspecs/features/moc.prf:
/usr/share/qt4/mkspecs/features/resources.prf:
/usr/share/qt4/mkspecs/features/uic.prf:
/usr/share/qt4/mkspecs/features/yacc.prf:
/usr/share/qt4/mkspecs/features/lex.prf:
/usr/share/qt4/mkspecs/features/include_source_dir.prf:
/usr/lib/x86_64-linux-gnu/libQtGui.prl:
/usr/lib/x86_64-linux-gnu/libQtCore.prl:
qmake:  FORCE
	@$(QMAKE) -o Makefile gui.pro

dist: 
	@$(CHK_DIR_EXISTS) .tmp/civil-cfd1.0.0 || $(MKDIR) .tmp/civil-cfd1.0.0 
	$(COPY_FILE) --parents $(SOURCES) $(DIST) .tmp/civil-cfd1.0.0/ && $(COPY_FILE) --parents MainWindow.h MeshDisplay.h GeometryDisplay.h Render.h RenderDisplay.h Boundary.h BoundaryDisplay.h SolverDialog.h VisualizeDisplay.h Baffle.h qcustomplot.h Visualize3DDisplay.h About.h InspectDialog.h Simulation.h .tmp/civil-cfd1.0.0/ && $(COPY_FILE) --parents gui.qrc .tmp/civil-cfd1.0.0/ && $(COPY_FILE) --parents main.cpp MainWindow.cpp MeshDisplay.cpp GeometryDisplay.cpp Render.cpp RenderDisplay.cpp MainWindow_Boundaries.cpp Boundary.cpp BoundaryDisplay.cpp Solver.cpp ResultList.cpp Visualize.cpp VisualizeDisplay.cpp Baffle.cpp MainWindow_Baffles.cpp qcustomplot.cpp Visualize3D.cpp Visualize3DDisplay.cpp About.cpp InspectDialog.cpp Simulation.cpp .tmp/civil-cfd1.0.0/ && $(COPY_FILE) --parents civlcfd.ui render.ui boundary.ui sboundary.ui solver.ui inspect_cell.ui baffle.ui about.ui .tmp/civil-cfd1.0.0/ && (cd `dirname .tmp/civil-cfd1.0.0` && $(TAR) civil-cfd1.0.0.tar civil-cfd1.0.0 && $(COMPRESS) civil-cfd1.0.0.tar) && $(MOVE) `dirname .tmp/civil-cfd1.0.0`/civil-cfd1.0.0.tar.gz . && $(DEL_FILE) -r .tmp/civil-cfd1.0.0


clean:compiler_clean 
	-$(DEL_FILE) $(OBJECTS)
	-$(DEL_FILE) *~ core *.core


####### Sub-libraries

distclean: clean
	-$(DEL_FILE) $(TARGET) 
	-$(DEL_FILE) Makefile


check: first

mocclean: compiler_moc_header_clean compiler_moc_source_clean

mocables: compiler_moc_header_make_all compiler_moc_source_make_all

compiler_moc_header_make_all: moc_MainWindow.cpp moc_Render.cpp moc_Boundary.cpp moc_SolverDialog.cpp moc_Baffle.cpp moc_qcustomplot.cpp moc_About.cpp moc_InspectDialog.cpp
compiler_moc_header_clean:
	-$(DEL_FILE) moc_MainWindow.cpp moc_Render.cpp moc_Boundary.cpp moc_SolverDialog.cpp moc_Baffle.cpp moc_qcustomplot.cpp moc_About.cpp moc_InspectDialog.cpp
moc_MainWindow.cpp: ui_civlcfd.h \
		Simulation.h \
		MeshDisplay.h \
		Boundary.h \
		ui_boundary.h \
		ui_sboundary.h \
		Baffle.h \
		ui_baffle.h \
		GeometryDisplay.h \
		Render.h \
		ui_render.h \
		RenderDisplay.h \
		InspectDialog.h \
		ui_inspect_cell.h \
		BoundaryDisplay.h \
		VisualizeDisplay.h \
		Visualize3DDisplay.h \
		SolverDialog.h \
		ui_solver.h \
		About.h \
		ui_about.h \
		MainWindow.h
	/usr/lib/x86_64-linux-gnu/qt4/bin/moc $(DEFINES) $(INCPATH) MainWindow.h -o moc_MainWindow.cpp

moc_Render.cpp: ui_render.h \
		RenderDisplay.h \
		GeometryDisplay.h \
		MeshDisplay.h \
		Simulation.h \
		Render.h
	/usr/lib/x86_64-linux-gnu/qt4/bin/moc $(DEFINES) $(INCPATH) Render.h -o moc_Render.cpp

moc_Boundary.cpp: ui_boundary.h \
		ui_sboundary.h \
		Simulation.h \
		Boundary.h
	/usr/lib/x86_64-linux-gnu/qt4/bin/moc $(DEFINES) $(INCPATH) Boundary.h -o moc_Boundary.cpp

moc_SolverDialog.cpp: ui_solver.h \
		Simulation.h \
		SolverDialog.h
	/usr/lib/x86_64-linux-gnu/qt4/bin/moc $(DEFINES) $(INCPATH) SolverDialog.h -o moc_SolverDialog.cpp

moc_Baffle.cpp: ui_baffle.h \
		Simulation.h \
		Baffle.h
	/usr/lib/x86_64-linux-gnu/qt4/bin/moc $(DEFINES) $(INCPATH) Baffle.h -o moc_Baffle.cpp

moc_qcustomplot.cpp: qcustomplot.h
	/usr/lib/x86_64-linux-gnu/qt4/bin/moc $(DEFINES) $(INCPATH) qcustomplot.h -o moc_qcustomplot.cpp

moc_About.cpp: ui_about.h \
		Simulation.h \
		About.h
	/usr/lib/x86_64-linux-gnu/qt4/bin/moc $(DEFINES) $(INCPATH) About.h -o moc_About.cpp

moc_InspectDialog.cpp: ui_inspect_cell.h \
		Simulation.h \
		InspectDialog.h
	/usr/lib/x86_64-linux-gnu/qt4/bin/moc $(DEFINES) $(INCPATH) InspectDialog.h -o moc_InspectDialog.cpp

compiler_rcc_make_all: qrc_gui.cpp
compiler_rcc_clean:
	-$(DEL_FILE) qrc_gui.cpp
qrc_gui.cpp: gui.qrc \
		icon.svg \
		resources/contact-new.svg \
		resources/mail-forward.svg \
		resources/document-new.svg \
		resources/media-playback-pause.svg \
		resources/format-justify-left.svg \
		resources/address-book-new.svg \
		resources/format-justify-center.svg \
		resources/mail-reply-sender.svg \
		resources/mail-message-new.svg \
		resources/edit-clear.svg \
		resources/format-text-italic.svg \
		resources/document-properties.svg \
		resources/media-eject.svg \
		resources/view-fullscreen.svg \
		resources/folder-new.svg \
		resources/system-search.svg \
		resources/media-seek-forward.svg \
		resources/mail-mark-junk.svg \
		resources/water.png \
		resources/edit-undo.svg \
		resources/format-text-bold.svg \
		resources/mail-send-receive.svg \
		resources/edit-select-all.svg \
		resources/media-playback-stop.svg \
		resources/system-shutdown.svg \
		resources/edit-delete.svg \
		resources/media-seek-backward.svg \
		resources/go-top.svg \
		resources/format-indent-less.svg \
		resources/media-playback-start.svg \
		resources/document-print-preview.svg \
		resources/document-print.svg \
		resources/format-indent-more.svg \
		resources/document-save.svg \
		resources/edit-cut.svg \
		resources/go-bottom.svg \
		resources/format-justify-fill.svg \
		resources/list-remove.svg \
		resources/format-text-strikethrough.svg \
		resources/edit-redo.svg \
		resources/bookmark-new.svg \
		resources/media-record.svg \
		resources/process-stop.svg \
		resources/mail-reply-all.svg \
		resources/go-previous.svg \
		resources/go-first.svg \
		resources/help-contents.svg \
		resources/format-text-underline.svg \
		resources/edit-copy.svg \
		resources/media-skip-forward.svg \
		resources/edit-find.svg \
		resources/appointment-new.svg \
		resources/go-next.svg \
		resources/system-log-out.svg \
		resources/edit-find-replace.svg \
		resources/window-new.svg \
		resources/document-open.svg \
		resources/go-down.svg \
		resources/go-last.svg \
		resources/edit-paste.svg \
		resources/accessories-calculator.svg \
		resources/go-jump.svg \
		resources/system-lock-screen.svg \
		resources/format-justify-right.svg \
		resources/go-up.svg \
		resources/media-skip-backward.svg \
		resources/tab-new.svg \
		resources/list-add.svg \
		resources/go-home.svg \
		resources/view-refresh.svg \
		resources/document-save-as.svg \
		resources/internet-web-browser.svg
	/usr/lib/x86_64-linux-gnu/qt4/bin/rcc -name gui gui.qrc -o qrc_gui.cpp

compiler_image_collection_make_all: qmake_image_collection.cpp
compiler_image_collection_clean:
	-$(DEL_FILE) qmake_image_collection.cpp
compiler_moc_source_make_all:
compiler_moc_source_clean:
compiler_uic_make_all: ui_civlcfd.h ui_render.h ui_boundary.h ui_sboundary.h ui_solver.h ui_inspect_cell.h ui_baffle.h ui_about.h
compiler_uic_clean:
	-$(DEL_FILE) ui_civlcfd.h ui_render.h ui_boundary.h ui_sboundary.h ui_solver.h ui_inspect_cell.h ui_baffle.h ui_about.h
ui_civlcfd.h: civlcfd.ui
	/usr/lib/x86_64-linux-gnu/qt4/bin/uic civlcfd.ui -o ui_civlcfd.h

ui_render.h: render.ui
	/usr/lib/x86_64-linux-gnu/qt4/bin/uic render.ui -o ui_render.h

ui_boundary.h: boundary.ui
	/usr/lib/x86_64-linux-gnu/qt4/bin/uic boundary.ui -o ui_boundary.h

ui_sboundary.h: sboundary.ui
	/usr/lib/x86_64-linux-gnu/qt4/bin/uic sboundary.ui -o ui_sboundary.h

ui_solver.h: solver.ui \
		qcustomplot.h
	/usr/lib/x86_64-linux-gnu/qt4/bin/uic solver.ui -o ui_solver.h

ui_inspect_cell.h: inspect_cell.ui
	/usr/lib/x86_64-linux-gnu/qt4/bin/uic inspect_cell.ui -o ui_inspect_cell.h

ui_baffle.h: baffle.ui
	/usr/lib/x86_64-linux-gnu/qt4/bin/uic baffle.ui -o ui_baffle.h

ui_about.h: about.ui
	/usr/lib/x86_64-linux-gnu/qt4/bin/uic about.ui -o ui_about.h

compiler_yacc_decl_make_all:
compiler_yacc_decl_clean:
compiler_yacc_impl_make_all:
compiler_yacc_impl_clean:
compiler_lex_make_all:
compiler_lex_clean:
compiler_clean: compiler_moc_header_clean compiler_rcc_clean compiler_uic_clean 

####### Compile

main.o: main.cpp MainWindow.h \
		ui_civlcfd.h \
		Simulation.h \
		MeshDisplay.h \
		Boundary.h \
		ui_boundary.h \
		ui_sboundary.h \
		Baffle.h \
		ui_baffle.h \
		GeometryDisplay.h \
		Render.h \
		ui_render.h \
		RenderDisplay.h \
		InspectDialog.h \
		ui_inspect_cell.h \
		BoundaryDisplay.h \
		VisualizeDisplay.h \
		Visualize3DDisplay.h \
		SolverDialog.h \
		ui_solver.h \
		About.h \
		ui_about.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o main.o main.cpp

MainWindow.o: MainWindow.cpp MainWindow.h \
		ui_civlcfd.h \
		Simulation.h \
		MeshDisplay.h \
		Boundary.h \
		ui_boundary.h \
		ui_sboundary.h \
		Baffle.h \
		ui_baffle.h \
		GeometryDisplay.h \
		Render.h \
		ui_render.h \
		RenderDisplay.h \
		InspectDialog.h \
		ui_inspect_cell.h \
		BoundaryDisplay.h \
		VisualizeDisplay.h \
		Visualize3DDisplay.h \
		SolverDialog.h \
		ui_solver.h \
		About.h \
		ui_about.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o MainWindow.o MainWindow.cpp

MeshDisplay.o: MeshDisplay.cpp MeshDisplay.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o MeshDisplay.o MeshDisplay.cpp

GeometryDisplay.o: GeometryDisplay.cpp GeometryDisplay.h \
		MeshDisplay.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o GeometryDisplay.o GeometryDisplay.cpp

Render.o: Render.cpp Render.h \
		ui_render.h \
		RenderDisplay.h \
		GeometryDisplay.h \
		MeshDisplay.h \
		Simulation.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o Render.o Render.cpp

RenderDisplay.o: RenderDisplay.cpp RenderDisplay.h \
		GeometryDisplay.h \
		MeshDisplay.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o RenderDisplay.o RenderDisplay.cpp

MainWindow_Boundaries.o: MainWindow_Boundaries.cpp MainWindow.h \
		ui_civlcfd.h \
		Simulation.h \
		MeshDisplay.h \
		Boundary.h \
		ui_boundary.h \
		ui_sboundary.h \
		Baffle.h \
		ui_baffle.h \
		GeometryDisplay.h \
		Render.h \
		ui_render.h \
		RenderDisplay.h \
		InspectDialog.h \
		ui_inspect_cell.h \
		BoundaryDisplay.h \
		VisualizeDisplay.h \
		Visualize3DDisplay.h \
		SolverDialog.h \
		ui_solver.h \
		About.h \
		ui_about.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o MainWindow_Boundaries.o MainWindow_Boundaries.cpp

Boundary.o: Boundary.cpp Boundary.h \
		ui_boundary.h \
		ui_sboundary.h \
		Simulation.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o Boundary.o Boundary.cpp

BoundaryDisplay.o: BoundaryDisplay.cpp BoundaryDisplay.h \
		RenderDisplay.h \
		GeometryDisplay.h \
		MeshDisplay.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o BoundaryDisplay.o BoundaryDisplay.cpp

Solver.o: Solver.cpp SolverDialog.h \
		ui_solver.h \
		Simulation.h \
		qcustomplot.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o Solver.o Solver.cpp

ResultList.o: ResultList.cpp MainWindow.h \
		ui_civlcfd.h \
		Simulation.h \
		MeshDisplay.h \
		Boundary.h \
		ui_boundary.h \
		ui_sboundary.h \
		Baffle.h \
		ui_baffle.h \
		GeometryDisplay.h \
		Render.h \
		ui_render.h \
		RenderDisplay.h \
		InspectDialog.h \
		ui_inspect_cell.h \
		BoundaryDisplay.h \
		VisualizeDisplay.h \
		Visualize3DDisplay.h \
		SolverDialog.h \
		ui_solver.h \
		About.h \
		ui_about.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o ResultList.o ResultList.cpp

Visualize.o: Visualize.cpp MainWindow.h \
		ui_civlcfd.h \
		Simulation.h \
		MeshDisplay.h \
		Boundary.h \
		ui_boundary.h \
		ui_sboundary.h \
		Baffle.h \
		ui_baffle.h \
		GeometryDisplay.h \
		Render.h \
		ui_render.h \
		RenderDisplay.h \
		InspectDialog.h \
		ui_inspect_cell.h \
		BoundaryDisplay.h \
		VisualizeDisplay.h \
		Visualize3DDisplay.h \
		SolverDialog.h \
		ui_solver.h \
		About.h \
		ui_about.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o Visualize.o Visualize.cpp

VisualizeDisplay.o: VisualizeDisplay.cpp VisualizeDisplay.h \
		GeometryDisplay.h \
		MeshDisplay.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o VisualizeDisplay.o VisualizeDisplay.cpp

Baffle.o: Baffle.cpp Baffle.h \
		ui_baffle.h \
		Simulation.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o Baffle.o Baffle.cpp

MainWindow_Baffles.o: MainWindow_Baffles.cpp MainWindow.h \
		ui_civlcfd.h \
		Simulation.h \
		MeshDisplay.h \
		Boundary.h \
		ui_boundary.h \
		ui_sboundary.h \
		Baffle.h \
		ui_baffle.h \
		GeometryDisplay.h \
		Render.h \
		ui_render.h \
		RenderDisplay.h \
		InspectDialog.h \
		ui_inspect_cell.h \
		BoundaryDisplay.h \
		VisualizeDisplay.h \
		Visualize3DDisplay.h \
		SolverDialog.h \
		ui_solver.h \
		About.h \
		ui_about.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o MainWindow_Baffles.o MainWindow_Baffles.cpp

qcustomplot.o: qcustomplot.cpp qcustomplot.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o qcustomplot.o qcustomplot.cpp

Visualize3D.o: Visualize3D.cpp MainWindow.h \
		ui_civlcfd.h \
		Simulation.h \
		MeshDisplay.h \
		Boundary.h \
		ui_boundary.h \
		ui_sboundary.h \
		Baffle.h \
		ui_baffle.h \
		GeometryDisplay.h \
		Render.h \
		ui_render.h \
		RenderDisplay.h \
		InspectDialog.h \
		ui_inspect_cell.h \
		BoundaryDisplay.h \
		VisualizeDisplay.h \
		Visualize3DDisplay.h \
		SolverDialog.h \
		ui_solver.h \
		About.h \
		ui_about.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o Visualize3D.o Visualize3D.cpp

Visualize3DDisplay.o: Visualize3DDisplay.cpp Visualize3DDisplay.h \
		VisualizeDisplay.h \
		GeometryDisplay.h \
		MeshDisplay.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o Visualize3DDisplay.o Visualize3DDisplay.cpp

About.o: About.cpp About.h \
		ui_about.h \
		Simulation.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o About.o About.cpp

InspectDialog.o: InspectDialog.cpp InspectDialog.h \
		ui_inspect_cell.h \
		Simulation.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o InspectDialog.o InspectDialog.cpp

Simulation.o: Simulation.cpp Simulation.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o Simulation.o Simulation.cpp

moc_MainWindow.o: moc_MainWindow.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_MainWindow.o moc_MainWindow.cpp

moc_Render.o: moc_Render.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_Render.o moc_Render.cpp

moc_Boundary.o: moc_Boundary.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_Boundary.o moc_Boundary.cpp

moc_SolverDialog.o: moc_SolverDialog.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_SolverDialog.o moc_SolverDialog.cpp

moc_Baffle.o: moc_Baffle.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_Baffle.o moc_Baffle.cpp

moc_qcustomplot.o: moc_qcustomplot.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_qcustomplot.o moc_qcustomplot.cpp

moc_About.o: moc_About.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_About.o moc_About.cpp

moc_InspectDialog.o: moc_InspectDialog.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_InspectDialog.o moc_InspectDialog.cpp

qrc_gui.o: qrc_gui.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o qrc_gui.o qrc_gui.cpp

####### Install

install:   FORCE

uninstall:   FORCE

FORCE:

