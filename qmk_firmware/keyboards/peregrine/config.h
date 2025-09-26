// Copyright 2024 Custom (@user)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

// Split keyboard configuration
#define MASTER_LEFT  // Left half is always master (USB connected)
 

// Debounce reduces chatter (unintended double-presses) - set 0 if debouncing is not needed
#define DEBOUNCE 5

// Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap
#define LOCKING_SUPPORT_ENABLE

// Locking resynchronize hack
#define LOCKING_RESYNC_ENABLE

// Force NKRO
#define FORCE_NKRO

// Stenography settings - STENO_ENABLE is set in rules.mk
// #define GEMINI_ENABLE  // Enable Gemini PR protocol for Plover Set in rules now