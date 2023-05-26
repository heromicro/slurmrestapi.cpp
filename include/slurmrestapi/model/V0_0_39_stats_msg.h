/**
 * Slurm Rest API
 * API to access and control Slurm.
 *
 * The version of the OpenAPI document: 0.0.39
 * Contact: sales@schedmd.com
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 6.6.0.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * V0_0_39_stats_msg.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_V0_0_39_stats_msg_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_V0_0_39_stats_msg_H_


#include "slurmrestapi/ModelBase.h"

#include "slurmrestapi/model/V0_0_39_stats_msg_rpcs_by_user_inner.h"
#include "slurmrestapi/model/V0_0_39_stats_msg_rpcs_by_type_inner.h"
#include <vector>

namespace org {
namespace openapitools {
namespace client {
namespace model {

class V0_0_39_stats_msg_rpcs_by_type_inner;
class V0_0_39_stats_msg_rpcs_by_user_inner;

/// <summary>
/// 
/// </summary>
class  V0_0_39_stats_msg
    : public ModelBase
{
public:
    V0_0_39_stats_msg();
    virtual ~V0_0_39_stats_msg();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// V0_0_39_stats_msg members

    /// <summary>
    /// 
    /// </summary>
    int32_t getPartsPacked() const;
    bool partsPackedIsSet() const;
    void unsetParts_packed();

    void setPartsPacked(int32_t value);

    /// <summary>
    /// 
    /// </summary>
    int64_t getReqTime() const;
    bool reqTimeIsSet() const;
    void unsetReq_time();

    void setReqTime(int64_t value);

    /// <summary>
    /// 
    /// </summary>
    int64_t getReqTimeStart() const;
    bool reqTimeStartIsSet() const;
    void unsetReq_time_start();

    void setReqTimeStart(int64_t value);

    /// <summary>
    /// 
    /// </summary>
    int32_t getServerThreadCount() const;
    bool serverThreadCountIsSet() const;
    void unsetServer_thread_count();

    void setServerThreadCount(int32_t value);

    /// <summary>
    /// 
    /// </summary>
    int32_t getAgentQueueSize() const;
    bool agentQueueSizeIsSet() const;
    void unsetAgent_queue_size();

    void setAgentQueueSize(int32_t value);

    /// <summary>
    /// 
    /// </summary>
    int32_t getAgentCount() const;
    bool agentCountIsSet() const;
    void unsetAgent_count();

    void setAgentCount(int32_t value);

    /// <summary>
    /// 
    /// </summary>
    int32_t getAgentThreadCount() const;
    bool agentThreadCountIsSet() const;
    void unsetAgent_thread_count();

    void setAgentThreadCount(int32_t value);

    /// <summary>
    /// 
    /// </summary>
    int32_t getDbdAgentQueueSize() const;
    bool dbdAgentQueueSizeIsSet() const;
    void unsetDbd_agent_queue_size();

    void setDbdAgentQueueSize(int32_t value);

    /// <summary>
    /// 
    /// </summary>
    int32_t getGettimeofdayLatency() const;
    bool gettimeofdayLatencyIsSet() const;
    void unsetGettimeofday_latency();

    void setGettimeofdayLatency(int32_t value);

    /// <summary>
    /// 
    /// </summary>
    int32_t getScheduleCycleMax() const;
    bool scheduleCycleMaxIsSet() const;
    void unsetSchedule_cycle_max();

    void setScheduleCycleMax(int32_t value);

    /// <summary>
    /// 
    /// </summary>
    int32_t getScheduleCycleLast() const;
    bool scheduleCycleLastIsSet() const;
    void unsetSchedule_cycle_last();

    void setScheduleCycleLast(int32_t value);

    /// <summary>
    /// 
    /// </summary>
    int32_t getScheduleCycleTotal() const;
    bool scheduleCycleTotalIsSet() const;
    void unsetSchedule_cycle_total();

    void setScheduleCycleTotal(int32_t value);

    /// <summary>
    /// 
    /// </summary>
    int64_t getScheduleCycleMean() const;
    bool scheduleCycleMeanIsSet() const;
    void unsetSchedule_cycle_mean();

    void setScheduleCycleMean(int64_t value);

    /// <summary>
    /// 
    /// </summary>
    int64_t getScheduleCycleMeanDepth() const;
    bool scheduleCycleMeanDepthIsSet() const;
    void unsetSchedule_cycle_mean_depth();

    void setScheduleCycleMeanDepth(int64_t value);

    /// <summary>
    /// 
    /// </summary>
    int64_t getScheduleCyclePerMinute() const;
    bool scheduleCyclePerMinuteIsSet() const;
    void unsetSchedule_cycle_per_minute();

    void setScheduleCyclePerMinute(int64_t value);

    /// <summary>
    /// 
    /// </summary>
    int32_t getScheduleQueueLength() const;
    bool scheduleQueueLengthIsSet() const;
    void unsetSchedule_queue_length();

    void setScheduleQueueLength(int32_t value);

    /// <summary>
    /// 
    /// </summary>
    int32_t getJobsSubmitted() const;
    bool jobsSubmittedIsSet() const;
    void unsetJobs_submitted();

    void setJobsSubmitted(int32_t value);

    /// <summary>
    /// 
    /// </summary>
    int32_t getJobsStarted() const;
    bool jobsStartedIsSet() const;
    void unsetJobs_started();

    void setJobsStarted(int32_t value);

    /// <summary>
    /// 
    /// </summary>
    int32_t getJobsCompleted() const;
    bool jobsCompletedIsSet() const;
    void unsetJobs_completed();

    void setJobsCompleted(int32_t value);

    /// <summary>
    /// 
    /// </summary>
    int32_t getJobsCanceled() const;
    bool jobsCanceledIsSet() const;
    void unsetJobs_canceled();

    void setJobsCanceled(int32_t value);

    /// <summary>
    /// 
    /// </summary>
    int32_t getJobsFailed() const;
    bool jobsFailedIsSet() const;
    void unsetJobs_failed();

    void setJobsFailed(int32_t value);

    /// <summary>
    /// 
    /// </summary>
    int32_t getJobsPending() const;
    bool jobsPendingIsSet() const;
    void unsetJobs_pending();

    void setJobsPending(int32_t value);

    /// <summary>
    /// 
    /// </summary>
    int32_t getJobsRunning() const;
    bool jobsRunningIsSet() const;
    void unsetJobs_running();

    void setJobsRunning(int32_t value);

    /// <summary>
    /// 
    /// </summary>
    int64_t getJobStatesTs() const;
    bool jobStatesTsIsSet() const;
    void unsetJob_states_ts();

    void setJobStatesTs(int64_t value);

    /// <summary>
    /// 
    /// </summary>
    int32_t getBfBackfilledJobs() const;
    bool bfBackfilledJobsIsSet() const;
    void unsetBf_backfilled_jobs();

    void setBfBackfilledJobs(int32_t value);

    /// <summary>
    /// 
    /// </summary>
    int32_t getBfLastBackfilledJobs() const;
    bool bfLastBackfilledJobsIsSet() const;
    void unsetBf_last_backfilled_jobs();

    void setBfLastBackfilledJobs(int32_t value);

    /// <summary>
    /// 
    /// </summary>
    int32_t getBfBackfilledHetJobs() const;
    bool bfBackfilledHetJobsIsSet() const;
    void unsetBf_backfilled_het_jobs();

    void setBfBackfilledHetJobs(int32_t value);

    /// <summary>
    /// 
    /// </summary>
    int32_t getBfCycleCounter() const;
    bool bfCycleCounterIsSet() const;
    void unsetBf_cycle_counter();

    void setBfCycleCounter(int32_t value);

    /// <summary>
    /// 
    /// </summary>
    int64_t getBfCycleMean() const;
    bool bfCycleMeanIsSet() const;
    void unsetBf_cycle_mean();

    void setBfCycleMean(int64_t value);

    /// <summary>
    /// 
    /// </summary>
    int64_t getBfDepthMean() const;
    bool bfDepthMeanIsSet() const;
    void unsetBf_depth_mean();

    void setBfDepthMean(int64_t value);

    /// <summary>
    /// 
    /// </summary>
    int64_t getBfDepthMeanTry() const;
    bool bfDepthMeanTryIsSet() const;
    void unsetBf_depth_mean_try();

    void setBfDepthMeanTry(int64_t value);

    /// <summary>
    /// 
    /// </summary>
    int64_t getBfCycleSum() const;
    bool bfCycleSumIsSet() const;
    void unsetBf_cycle_sum();

    void setBfCycleSum(int64_t value);

    /// <summary>
    /// 
    /// </summary>
    int32_t getBfCycleLast() const;
    bool bfCycleLastIsSet() const;
    void unsetBf_cycle_last();

    void setBfCycleLast(int32_t value);

    /// <summary>
    /// 
    /// </summary>
    int32_t getBfLastDepth() const;
    bool bfLastDepthIsSet() const;
    void unsetBf_last_depth();

    void setBfLastDepth(int32_t value);

    /// <summary>
    /// 
    /// </summary>
    int32_t getBfLastDepthTry() const;
    bool bfLastDepthTryIsSet() const;
    void unsetBf_last_depth_try();

    void setBfLastDepthTry(int32_t value);

    /// <summary>
    /// 
    /// </summary>
    int32_t getBfDepthSum() const;
    bool bfDepthSumIsSet() const;
    void unsetBf_depth_sum();

    void setBfDepthSum(int32_t value);

    /// <summary>
    /// 
    /// </summary>
    int32_t getBfDepthTrySum() const;
    bool bfDepthTrySumIsSet() const;
    void unsetBf_depth_try_sum();

    void setBfDepthTrySum(int32_t value);

    /// <summary>
    /// 
    /// </summary>
    int32_t getBfQueueLen() const;
    bool bfQueueLenIsSet() const;
    void unsetBf_queue_len();

    void setBfQueueLen(int32_t value);

    /// <summary>
    /// 
    /// </summary>
    int64_t getBfQueueLenMean() const;
    bool bfQueueLenMeanIsSet() const;
    void unsetBf_queue_len_mean();

    void setBfQueueLenMean(int64_t value);

    /// <summary>
    /// 
    /// </summary>
    int32_t getBfQueueLenSum() const;
    bool bfQueueLenSumIsSet() const;
    void unsetBf_queue_len_sum();

    void setBfQueueLenSum(int32_t value);

    /// <summary>
    /// 
    /// </summary>
    int32_t getBfTableSize() const;
    bool bfTableSizeIsSet() const;
    void unsetBf_table_size();

    void setBfTableSize(int32_t value);

    /// <summary>
    /// 
    /// </summary>
    int64_t getBfTableSizeMean() const;
    bool bfTableSizeMeanIsSet() const;
    void unsetBf_table_size_mean();

    void setBfTableSizeMean(int64_t value);

    /// <summary>
    /// 
    /// </summary>
    int64_t getBfWhenLastCycle() const;
    bool bfWhenLastCycleIsSet() const;
    void unsetBf_when_last_cycle();

    void setBfWhenLastCycle(int64_t value);

    /// <summary>
    /// 
    /// </summary>
    bool isBfActive() const;
    bool bfActiveIsSet() const;
    void unsetBf_active();

    void setBfActive(bool value);

    /// <summary>
    /// RPCs by message type
    /// </summary>
    std::vector<std::shared_ptr<V0_0_39_stats_msg_rpcs_by_type_inner>>& getRpcsByMessageType();
    bool rpcsByMessageTypeIsSet() const;
    void unsetRpcs_by_message_type();

    void setRpcsByMessageType(const std::vector<std::shared_ptr<V0_0_39_stats_msg_rpcs_by_type_inner>>& value);

    /// <summary>
    /// RPCs by user
    /// </summary>
    std::vector<std::shared_ptr<V0_0_39_stats_msg_rpcs_by_user_inner>>& getRpcsByUser();
    bool rpcsByUserIsSet() const;
    void unsetRpcs_by_user();

    void setRpcsByUser(const std::vector<std::shared_ptr<V0_0_39_stats_msg_rpcs_by_user_inner>>& value);


protected:
    int32_t m_Parts_packed;
    bool m_Parts_packedIsSet;
    int64_t m_Req_time;
    bool m_Req_timeIsSet;
    int64_t m_Req_time_start;
    bool m_Req_time_startIsSet;
    int32_t m_Server_thread_count;
    bool m_Server_thread_countIsSet;
    int32_t m_Agent_queue_size;
    bool m_Agent_queue_sizeIsSet;
    int32_t m_Agent_count;
    bool m_Agent_countIsSet;
    int32_t m_Agent_thread_count;
    bool m_Agent_thread_countIsSet;
    int32_t m_Dbd_agent_queue_size;
    bool m_Dbd_agent_queue_sizeIsSet;
    int32_t m_Gettimeofday_latency;
    bool m_Gettimeofday_latencyIsSet;
    int32_t m_Schedule_cycle_max;
    bool m_Schedule_cycle_maxIsSet;
    int32_t m_Schedule_cycle_last;
    bool m_Schedule_cycle_lastIsSet;
    int32_t m_Schedule_cycle_total;
    bool m_Schedule_cycle_totalIsSet;
    int64_t m_Schedule_cycle_mean;
    bool m_Schedule_cycle_meanIsSet;
    int64_t m_Schedule_cycle_mean_depth;
    bool m_Schedule_cycle_mean_depthIsSet;
    int64_t m_Schedule_cycle_per_minute;
    bool m_Schedule_cycle_per_minuteIsSet;
    int32_t m_Schedule_queue_length;
    bool m_Schedule_queue_lengthIsSet;
    int32_t m_Jobs_submitted;
    bool m_Jobs_submittedIsSet;
    int32_t m_Jobs_started;
    bool m_Jobs_startedIsSet;
    int32_t m_Jobs_completed;
    bool m_Jobs_completedIsSet;
    int32_t m_Jobs_canceled;
    bool m_Jobs_canceledIsSet;
    int32_t m_Jobs_failed;
    bool m_Jobs_failedIsSet;
    int32_t m_Jobs_pending;
    bool m_Jobs_pendingIsSet;
    int32_t m_Jobs_running;
    bool m_Jobs_runningIsSet;
    int64_t m_Job_states_ts;
    bool m_Job_states_tsIsSet;
    int32_t m_Bf_backfilled_jobs;
    bool m_Bf_backfilled_jobsIsSet;
    int32_t m_Bf_last_backfilled_jobs;
    bool m_Bf_last_backfilled_jobsIsSet;
    int32_t m_Bf_backfilled_het_jobs;
    bool m_Bf_backfilled_het_jobsIsSet;
    int32_t m_Bf_cycle_counter;
    bool m_Bf_cycle_counterIsSet;
    int64_t m_Bf_cycle_mean;
    bool m_Bf_cycle_meanIsSet;
    int64_t m_Bf_depth_mean;
    bool m_Bf_depth_meanIsSet;
    int64_t m_Bf_depth_mean_try;
    bool m_Bf_depth_mean_tryIsSet;
    int64_t m_Bf_cycle_sum;
    bool m_Bf_cycle_sumIsSet;
    int32_t m_Bf_cycle_last;
    bool m_Bf_cycle_lastIsSet;
    int32_t m_Bf_last_depth;
    bool m_Bf_last_depthIsSet;
    int32_t m_Bf_last_depth_try;
    bool m_Bf_last_depth_tryIsSet;
    int32_t m_Bf_depth_sum;
    bool m_Bf_depth_sumIsSet;
    int32_t m_Bf_depth_try_sum;
    bool m_Bf_depth_try_sumIsSet;
    int32_t m_Bf_queue_len;
    bool m_Bf_queue_lenIsSet;
    int64_t m_Bf_queue_len_mean;
    bool m_Bf_queue_len_meanIsSet;
    int32_t m_Bf_queue_len_sum;
    bool m_Bf_queue_len_sumIsSet;
    int32_t m_Bf_table_size;
    bool m_Bf_table_sizeIsSet;
    int64_t m_Bf_table_size_mean;
    bool m_Bf_table_size_meanIsSet;
    int64_t m_Bf_when_last_cycle;
    bool m_Bf_when_last_cycleIsSet;
    bool m_Bf_active;
    bool m_Bf_activeIsSet;
    std::vector<std::shared_ptr<V0_0_39_stats_msg_rpcs_by_type_inner>> m_Rpcs_by_message_type;
    bool m_Rpcs_by_message_typeIsSet;
    std::vector<std::shared_ptr<V0_0_39_stats_msg_rpcs_by_user_inner>> m_Rpcs_by_user;
    bool m_Rpcs_by_userIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_V0_0_39_stats_msg_H_ */
