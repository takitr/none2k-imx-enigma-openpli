
### gst 1.0 
# tmp disable
#         gst1.0-fsl-plugin 

IMAGE_INSTALL += " \
	gstreamer1.0 \
	gstreamer1.0-doc \
	gstreamer1.0-libav \
	gstreamer1.0-omx \
	gstreamer1.0-plugins-bad \
        gstreamer1.0-plugins-bad-meta \
	gstreamer1.0-plugins-bad-accurip \
	gstreamer1.0-plugins-bad-adpcmdec \
	gstreamer1.0-plugins-bad-adpcmenc \
	gstreamer1.0-plugins-bad-aiff \
	gstreamer1.0-plugins-bad-asfmux \
	gstreamer1.0-plugins-bad-audiofxbad \
	gstreamer1.0-plugins-bad-audiovisualizers \
	gstreamer1.0-plugins-bad-autoconvert \
	gstreamer1.0-plugins-bad-bayer \
	gstreamer1.0-plugins-bad-bz2 \
	gstreamer1.0-plugins-bad-camerabin2 \
	gstreamer1.0-plugins-bad-coloreffects \
	gstreamer1.0-plugins-bad-curl \
	gstreamer1.0-plugins-bad-dashdemux \
	gstreamer1.0-plugins-bad-dataurisrc \
	gstreamer1.0-plugins-bad-debugutilsbad \
	gstreamer1.0-plugins-bad-decklink \
	gstreamer1.0-plugins-bad-dvb \
	gstreamer1.0-plugins-bad-dvbsuboverlay \
	gstreamer1.0-plugins-bad-dvdspu \
	gstreamer1.0-plugins-bad-fbdevsink \
	gstreamer1.0-plugins-bad-festival \
	gstreamer1.0-plugins-bad-fieldanalysis \
	gstreamer1.0-plugins-bad-fragmented \
	gstreamer1.0-plugins-bad-freeverb \
	gstreamer1.0-plugins-bad-frei0r \
	gstreamer1.0-plugins-bad-gaudieffects \
	gstreamer1.0-plugins-bad-gdp \
	gstreamer1.0-plugins-bad-geometrictransform \
	gstreamer1.0-plugins-bad-id3tag \
	gstreamer1.0-plugins-bad-inter \
	gstreamer1.0-plugins-bad-interlace \
	gstreamer1.0-plugins-bad-ivtc \
	gstreamer1.0-plugins-bad-jpegformat \
	gstreamer1.0-plugins-bad-liveadder \
	gstreamer1.0-plugins-bad-midi \
	gstreamer1.0-plugins-bad-mpegpsdemux \
	gstreamer1.0-plugins-bad-mpegpsmux \
	gstreamer1.0-plugins-bad-mpegtsdemux \
	gstreamer1.0-plugins-bad-mpegtsmux \
	gstreamer1.0-plugins-bad-mxf \
	gstreamer1.0-plugins-bad-neonhttpsrc \
	gstreamer1.0-plugins-bad-pcapparse \
	gstreamer1.0-plugins-bad-pnm \
	gstreamer1.0-plugins-bad-rawparse \
	gstreamer1.0-plugins-bad-removesilence \
	gstreamer1.0-plugins-bad-rfbsrc \
        gstreamer1.0-plugins-bad-rtmp \
	gstreamer1.0-plugins-bad-sbc \
	gstreamer1.0-plugins-bad-sdpelem \
	gstreamer1.0-plugins-bad-segmentclip \
	gstreamer1.0-plugins-bad-shm \
	gstreamer1.0-plugins-bad-siren \
	gstreamer1.0-plugins-bad-smooth \
	gstreamer1.0-plugins-bad-smoothstreaming \
	gstreamer1.0-plugins-bad-speed \
	gstreamer1.0-plugins-bad-subenc \
	gstreamer1.0-plugins-bad-uvch264 \
	gstreamer1.0-plugins-bad-videofiltersbad \
	gstreamer1.0-plugins-bad-videoparsersbad \
	gstreamer1.0-plugins-bad-y4mdec \
	gstreamer1.0-plugins-bad-yadif \
	gstreamer1.0-plugins-base \
        gstreamer1.0-plugins-base-meta \
	gstreamer1.0-plugins-base-adder \
	gstreamer1.0-plugins-base-alsa \
	gstreamer1.0-plugins-base-app \
	gstreamer1.0-plugins-base-apps \
	gstreamer1.0-plugins-base-audioconvert \
	gstreamer1.0-plugins-base-audiorate \
	gstreamer1.0-plugins-base-audioresample \
	gstreamer1.0-plugins-base-audiotestsrc \
	gstreamer1.0-plugins-base-doc \
	gstreamer1.0-plugins-base-encodebin \
	gstreamer1.0-plugins-base-gio \
	gstreamer1.0-plugins-base-ivorbisdec \
	gstreamer1.0-plugins-base-ogg \
	gstreamer1.0-plugins-base-playback \
	gstreamer1.0-plugins-base-subparse \
	gstreamer1.0-plugins-base-tcp \
	gstreamer1.0-plugins-base-theora \
	gstreamer1.0-plugins-base-typefindfunctions \
	gstreamer1.0-plugins-base-videoconvert \
	gstreamer1.0-plugins-base-videorate \
	gstreamer1.0-plugins-base-videoscale \
	gstreamer1.0-plugins-base-videotestsrc \
	gstreamer1.0-plugins-base-volume \
	gstreamer1.0-plugins-base-vorbis \
	gstreamer1.0-plugins-good \
        gstreamer1.0-plugins-good-meta \
	gstreamer1.0-plugins-good-alaw \
	gstreamer1.0-plugins-good-alpha \
	gstreamer1.0-plugins-good-alphacolor \
	gstreamer1.0-plugins-good-apetag \
	gstreamer1.0-plugins-good-audiofx \
	gstreamer1.0-plugins-good-audioparsers \
	gstreamer1.0-plugins-good-auparse \
	gstreamer1.0-plugins-good-autodetect \
	gstreamer1.0-plugins-good-avi \
	gstreamer1.0-plugins-good-cairo \
	gstreamer1.0-plugins-good-cutter \
	gstreamer1.0-plugins-good-debug \
	gstreamer1.0-plugins-good-deinterlace \
	gstreamer1.0-plugins-good-dtmf \
	gstreamer1.0-plugins-good-effectv \
	gstreamer1.0-plugins-good-equalizer \
	gstreamer1.0-plugins-good-flac \
	gstreamer1.0-plugins-good-flv \
	gstreamer1.0-plugins-good-flxdec \
	gstreamer1.0-plugins-good-gdkpixbuf \
	gstreamer1.0-plugins-good-goom \
	gstreamer1.0-plugins-good-goom2k1 \
	gstreamer1.0-plugins-good-icydemux \
	gstreamer1.0-plugins-good-id3demux \
	gstreamer1.0-plugins-good-imagefreeze \
	gstreamer1.0-plugins-good-interleave \
	gstreamer1.0-plugins-good-isomp4 \
	gstreamer1.0-plugins-good-jpeg \
	gstreamer1.0-plugins-good-level \
	gstreamer1.0-plugins-good-matroska \
	gstreamer1.0-plugins-good-mulaw \
	gstreamer1.0-plugins-good-multifile \
	gstreamer1.0-plugins-good-multipart \
	gstreamer1.0-plugins-good-navigationtest \
	gstreamer1.0-plugins-good-ossaudio \
	gstreamer1.0-plugins-good-png \
	gstreamer1.0-plugins-good-replaygain \
	gstreamer1.0-plugins-good-rtp \
	gstreamer1.0-plugins-good-rtpmanager \
	gstreamer1.0-plugins-good-rtsp \
	gstreamer1.0-plugins-good-shapewipe \
	gstreamer1.0-plugins-good-smpte \
	gstreamer1.0-plugins-good-souphttpsrc \
	gstreamer1.0-plugins-good-spectrum \
	gstreamer1.0-plugins-good-speex \
	gstreamer1.0-plugins-good-taglib \
	gstreamer1.0-plugins-good-udp \
	gstreamer1.0-plugins-good-video4linux2 \
	gstreamer1.0-plugins-good-videobox \
	gstreamer1.0-plugins-good-videocrop \
	gstreamer1.0-plugins-good-videofilter \
	gstreamer1.0-plugins-good-videomixer \
	gstreamer1.0-plugins-good-wavenc \
	gstreamer1.0-plugins-good-wavparse \
	gstreamer1.0-plugins-good-y4menc \
	gstreamer1.0-plugins-imx \
	gstreamer1.0-plugins-imx-imxeglvivsink \
	gstreamer1.0-plugins-imx-imxipu \
	gstreamer1.0-plugins-imx-imxv4l2src \
	gstreamer1.0-plugins-imx-imxvpu \
	gstreamer1.0-plugins-imx-meta \
	gstreamer1.0-plugins-ugly \
        gstreamer1.0-plugins-ugly-meta \
	gstreamer1.0-plugins-ugly-a52dec \
	gstreamer1.0-plugins-ugly-asf \
	gstreamer1.0-plugins-ugly-dvdlpcmdec \
	gstreamer1.0-plugins-ugly-dvdsub \
	gstreamer1.0-plugins-ugly-lame \
	gstreamer1.0-plugins-ugly-mad \
	gstreamer1.0-plugins-ugly-mpeg2dec \
	gstreamer1.0-plugins-ugly-rmdemux \
	gstreamer1.0-plugins-ugly-xingmux \
"

### gst1.0 tmp deact
#        gstreamer1.0-plugins-bad-bluez 
#        gstreamer1.0-plugins-bad-eglglessink 
#        gstreamer1.0-plugins-bad-mfc 
#        gstreamer1.0-plugins-base-ximagesink 
#        gstreamer1.0-plugins-base-xvimagesink 
#        gstreamer1.0-plugins-good-ximagesrc 
