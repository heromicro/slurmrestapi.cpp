/**
 * Slurm REST API
 * API to access and control Slurm
 *
 * The version of the OpenAPI document: Slurm-24.05.5&openapi/dbv0.0.39&openapi/slurmctld&openapi/slurmdbd&openapi/v0.0.39
 * Contact: sales@schedmd.com
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 7.10.0.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * V0_0_41_kill_jobs_msg.h
 *
 * 
 */

#ifndef HM_SLURM_CLIENT_MODEL_V0_0_41_kill_jobs_msg_H_
#define HM_SLURM_CLIENT_MODEL_V0_0_41_kill_jobs_msg_H_


#include "slurmrestapi/ModelBase.h"

#include <cpprest/details/basic_types.h>
#include <vector>

namespace hm {
namespace slurm {
namespace client {
namespace model {



/// <summary>
/// 
/// </summary>
class  V0_0_41_kill_jobs_msg
    : public ModelBase
{
public:
    V0_0_41_kill_jobs_msg();
    virtual ~V0_0_41_kill_jobs_msg();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// V0_0_41_kill_jobs_msg members

    /// <summary>
    /// Filter jobs to a specific account
    /// </summary>
    utility::string_t getAccount() const;
    bool accountIsSet() const;
    void unsetAccount();

    void setAccount(const utility::string_t& value);

    /// <summary>
    /// Filter jobs according to flags
    /// </summary>
    std::vector<utility::string_t>& getFlags();
    bool flagsIsSet() const;
    void unsetFlags();

    void setFlags(const std::vector<utility::string_t>& value);

    /// <summary>
    /// Filter jobs to a specific name
    /// </summary>
    utility::string_t getJobName() const;
    bool jobNameIsSet() const;
    void unsetJob_name();

    void setJobName(const utility::string_t& value);

    /// <summary>
    /// List of jobs to signal
    /// </summary>
    std::vector<utility::string_t>& getJobs();
    bool jobsIsSet() const;
    void unsetJobs();

    void setJobs(const std::vector<utility::string_t>& value);

    /// <summary>
    /// Filter jobs to a specific partition
    /// </summary>
    utility::string_t getPartition() const;
    bool partitionIsSet() const;
    void unsetPartition();

    void setPartition(const utility::string_t& value);

    /// <summary>
    /// Filter jobs to a specific QOS
    /// </summary>
    utility::string_t getQos() const;
    bool qosIsSet() const;
    void unsetQos();

    void setQos(const utility::string_t& value);

    /// <summary>
    /// Filter jobs to a specific reservation
    /// </summary>
    utility::string_t getReservation() const;
    bool reservationIsSet() const;
    void unsetReservation();

    void setReservation(const utility::string_t& value);

    /// <summary>
    /// Signal to send to jobs
    /// </summary>
    utility::string_t getSignal() const;
    bool signalIsSet() const;
    void unsetSignal();

    void setSignal(const utility::string_t& value);

    /// <summary>
    /// Filter jobs to a specific state
    /// </summary>
    std::vector<utility::string_t>& getJobState();
    bool jobStateIsSet() const;
    void unsetJob_state();

    void setJobState(const std::vector<utility::string_t>& value);

    /// <summary>
    /// Filter jobs to a specific numeric user id
    /// </summary>
    utility::string_t getUserId() const;
    bool userIdIsSet() const;
    void unsetUser_id();

    void setUserId(const utility::string_t& value);

    /// <summary>
    /// Filter jobs to a specific user name
    /// </summary>
    utility::string_t getUserName() const;
    bool userNameIsSet() const;
    void unsetUser_name();

    void setUserName(const utility::string_t& value);

    /// <summary>
    /// Filter jobs to a specific wckey
    /// </summary>
    utility::string_t getWckey() const;
    bool wckeyIsSet() const;
    void unsetWckey();

    void setWckey(const utility::string_t& value);

    /// <summary>
    /// Filter jobs to a set of nodes
    /// </summary>
    std::vector<utility::string_t>& getNodes();
    bool nodesIsSet() const;
    void unsetNodes();

    void setNodes(const std::vector<utility::string_t>& value);


protected:
    utility::string_t m_Account;
    bool m_AccountIsSet;
    std::vector<utility::string_t> m_Flags;
    bool m_FlagsIsSet;
    utility::string_t m_Job_name;
    bool m_Job_nameIsSet;
    std::vector<utility::string_t> m_Jobs;
    bool m_JobsIsSet;
    utility::string_t m_Partition;
    bool m_PartitionIsSet;
    utility::string_t m_Qos;
    bool m_QosIsSet;
    utility::string_t m_Reservation;
    bool m_ReservationIsSet;
    utility::string_t m_Signal;
    bool m_SignalIsSet;
    std::vector<utility::string_t> m_Job_state;
    bool m_Job_stateIsSet;
    utility::string_t m_User_id;
    bool m_User_idIsSet;
    utility::string_t m_User_name;
    bool m_User_nameIsSet;
    utility::string_t m_Wckey;
    bool m_WckeyIsSet;
    std::vector<utility::string_t> m_Nodes;
    bool m_NodesIsSet;
};


}
}
}
}

#endif /* HM_SLURM_CLIENT_MODEL_V0_0_41_kill_jobs_msg_H_ */
