FROM debian:latest

RUN apt-get update \
 && apt-get install --no-install-recommends -y build-essential \
    gcc \
    unzip \
    wget \
    zip \
    gcc-avr \
    binutils-avr \
    avr-libc \
    dfu-programmer \
    dfu-util \
    gcc-arm-none-eabi \
    binutils-arm-none-eabi \
    libnewlib-arm-none-eabi \
    git

RUN apt-get clean
RUN rm -rf /var/lib/apt/lists/*

RUN git clone

ENV keyboard=gh60
ENV keymap=joren

WORKDIR /tmk_keyboard/keyboard