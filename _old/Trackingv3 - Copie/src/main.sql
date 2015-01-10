/*
Navicat SQLite Data Transfer

Source Server         : Tracking
Source Server Version : 30802
Source Host           : :0

Target Server Type    : SQLite
Target Server Version : 30802
File Encoding         : 65001

Date: 2014-09-22 06:13:30
*/

PRAGMA foreign_keys = OFF;

-- ----------------------------
-- Table structure for levels
-- ----------------------------
DROP TABLE IF EXISTS "main"."levels";
CREATE TABLE "levels" (
"level_id"  INTEGER PRIMARY KEY AUTOINCREMENT,
"level"  TEXT(50)
);

-- ----------------------------
-- Table structure for sqlite_sequence
-- ----------------------------
DROP TABLE IF EXISTS "main"."sqlite_sequence";
CREATE TABLE sqlite_sequence(name,seq);

-- ----------------------------
-- Table structure for tracks
-- ----------------------------
DROP TABLE IF EXISTS "main"."tracks";
CREATE TABLE "tracks" (
"track_id"  INTEGER PRIMARY KEY AUTOINCREMENT,
"issue"  TEXT,
"type_id"  INTEGER,
"level_id"  INTEGER,
"open_date"  TEXT,
"open_user_id"  INTEGER,
"close_date"  TEXT,
"close_user_id"  INTEGER,
"comments"  TEXT
);

-- ----------------------------
-- Table structure for types
-- ----------------------------
DROP TABLE IF EXISTS "main"."types";
CREATE TABLE "types" (
"type_id"  INTEGER PRIMARY KEY AUTOINCREMENT,
"type"  TEXT(50)
);

-- ----------------------------
-- Table structure for users
-- ----------------------------
DROP TABLE IF EXISTS "main"."users";
CREATE TABLE "users" (
"user_id"  INTEGER PRIMARY KEY AUTOINCREMENT,
"user"  TEXT(50)
);
