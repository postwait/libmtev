# libmtev changes

# 1

## 1.2

### 1.2.0

 * No changes, semver bump due to 1.1.3's new eventer calls.

## 1.1

### 1.1.3

 * Add `eventer_jobq` documentation.
 * Add `eventer_jobq_set_max_backlog`.
 * Add "try" variants for the `eventer_add_asynch` calls.

### 1.1.2

 * Fix potential use-after-free in reverse connections. (#317)

### 1.1.1

 * Allow 64bit integers for size-based log rotation parameters.
 * Make `mtev.thread_self` work in lua\_web as it does in lua\_general.
 * Const-ify mtev\_huge\_hash APIs.

### 1.1.0

 * Add new structure, `mtev_huge_hash`, which uses LMDB to provide a
   disk-backed hash table of arbitrary size. If a dependency on LMDB is
   undesirable, one may configure with `--disable-lmdb`.
 * Change SONAME to include just the major version, making future minor-version
   bumps easier.

## 1.0

### 1.0.2

 * Fix use-after-free in Zipkin span publication.
 * Sensibly set a default IP address for Zipkin spans.
 * Protect against crash when tracing is enabled after boot.

### 1.0.1

 * Rework logging within websockets support code.
 * Various documentation fixes and updates.
 * Fixes crash in `lua_web` `mtev.coroutine_spawn`
 * Fixes memory leak in lua `mtev.waitfor`/`mtev.notify`.
 * Fixes memory leak when destroying an eventer jobq.

### 1.0.0

 * 3231 commits from 37 people over 10 years...