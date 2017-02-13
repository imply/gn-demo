# Copyright 2014 The Crashpad Authors. All rights reserved.
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#     http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

vars = {
  'chromium_git': 'https://chromium.googlesource.com',
  'github_git': 'https://github.com',
  'project_name': 'gn-demo',
}

deps = {
  'buildtools':
      Var('chromium_git') + '/chromium/buildtools.git@' +
      'a7cc7a3e21a061975b33dcdcd81a9716ba614c3c',
  Var('project_name') + '/build/config':
      Var('github_git') + '/imply/build-config.git@' +
      '92a4b35e310ed08f9bb0397d000afbaa6cf4112b',
  Var('project_name') + '/third_party/mini_chromium':
      Var('chromium_git') + '/chromium/mini_chromium.git@' +
      '4f3cfc8e7c2b7d77f94f41a32c3ec84a6920f05d',
}

hooks = [
  {
    'name': 'clang_format_mac',
    'pattern': '.',
    'action': [
      'download_from_google_storage',
      '--platform=^darwin$',
      '--no_resume',
      '--no_auth',
      '--bucket=chromium-clang-format',
      '--sha1_file',
      'buildtools/mac/clang-format.sha1',
    ],
  },
  {
    'name': 'clang_format_win',
    'pattern': '.',
    'action': [
      'download_from_google_storage',
      '--platform=^win32$',
      '--no_resume',
      '--no_auth',
      '--bucket=chromium-clang-format',
      '--sha1_file',
      'buildtools/win/clang-format.exe.sha1',
    ],
  },
  {
    'name': 'gn_mac',
    'pattern': '.',
    'action': [
      'download_from_google_storage',
      '--platform=^darwin$',
      '--no_resume',
      '--no_auth',
      '--bucket=chromium-gn',
      '--sha1_file',
      'buildtools/mac/gn.sha1',
    ],
  },
  {
    'name': 'gn_win',
    'pattern': '.',
    'action': [
      'download_from_google_storage',
      '--platform=^win32$',
      '--no_resume',
      '--no_auth',
      '--bucket=chromium-gn',
      '--sha1_file',
      'buildtools/win/gn.exe.sha1',
    ],
  },
]

recursedeps = [
  'buildtools',
]
