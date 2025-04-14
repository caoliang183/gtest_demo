#!/bin/bash
if [ -z "$FEISHU_WEBHOOK" ]; then
  echo "Missing FEISHU_WEBHOOK"
  exit 1
fi

STATUS="✅ 所有测试通过"
if grep -r "<Failure>" build/Testing 2>/dev/null; then
  STATUS="❌ 测试失败"
fi

curl -X POST -H "Content-Type: application/json" -d "{
  \\"msg_type\\": \\"text\\",
  \\"content\\": {
    \\"text\\": \\"GTest 测试完成\\n状态：$STATUS\\n详情：${{ GITHUB_SERVER_URL }}/${{ GITHUB_REPOSITORY }}/actions/runs/${{ GITHUB_RUN_ID }}\\"
  }
}" "$FEISHU_WEBHOOK"
