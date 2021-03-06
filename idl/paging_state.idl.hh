namespace service {
namespace pager {
class paging_state {
    partition_key get_partition_key();
    std::experimental::optional<clustering_key> get_clustering_key();
    uint32_t get_remaining();
    utils::UUID get_query_uuid() [[version 2.2]] = utils::UUID();
    std::unordered_map<nonwrapping_range<dht::token>, std::vector<utils::UUID>> get_last_replicas() [[version 2.2]] = std::unordered_map<nonwrapping_range<dht::token>, std::vector<utils::UUID>>();
};
}
}
