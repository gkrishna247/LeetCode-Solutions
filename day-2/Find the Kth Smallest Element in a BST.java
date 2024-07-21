public class KthSmallestElement {
    private static int count = 0;
    private static int result = -1;

    public static int kthSmallest(TreeNode root, int k) {
        inorderTraversal(root, k);
        return result;
    }

    private static void inorderTraversal(TreeNode node, int k) {
        if (node == null || count >= k) return;
        inorderTraversal(node.left, k);
        count++;
        if (count == k) result = node.val;
        inorderTraversal(node.right, k);
    }
}

class TreeNode {
    int val;
    TreeNode left;
    TreeNode right;
    TreeNode(int x) { val = x; }
}
