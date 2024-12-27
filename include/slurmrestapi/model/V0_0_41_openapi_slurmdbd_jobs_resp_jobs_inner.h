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
 * V0_0_41_openapi_slurmdbd_jobs_resp_jobs_inner.h
 *
 * 
 */

#ifndef HM_SLURM_CLIENT_MODEL_V0_0_41_openapi_slurmdbd_jobs_resp_jobs_inner_H_
#define HM_SLURM_CLIENT_MODEL_V0_0_41_openapi_slurmdbd_jobs_resp_jobs_inner_H_


#include "slurmrestapi/ModelBase.h"

#include "slurmrestapi/model/V0_0_40_job_reservation.h"
#include "slurmrestapi/model/V0_0_41_openapi_slurmdbd_jobs_resp_jobs_inner_time.h"
#include "slurmrestapi/model/V0_0_40_job_mcs.h"
#include "slurmrestapi/model/V0_0_41_openapi_slurmdbd_jobs_resp_jobs_inner_required.h"
#include <vector>
#include "slurmrestapi/model/V0_0_41_openapi_slurmdbd_jobs_resp_jobs_inner_het.h"
#include "slurmrestapi/model/V0_0_41_openapi_slurmdbd_jobs_resp_jobs_inner_wckey.h"
#include "slurmrestapi/model/V0_0_41_job_desc_msg_priority.h"
#include "slurmrestapi/model/V0_0_41_openapi_slurmdbd_jobs_resp_jobs_inner_steps_inner.h"
#include "slurmrestapi/model/V0_0_41_openapi_slurmdbd_jobs_resp_jobs_inner_tres.h"
#include <cpprest/details/basic_types.h>
#include "slurmrestapi/model/V0_0_40_job_state.h"
#include "slurmrestapi/model/V0_0_41_openapi_slurmdbd_jobs_resp_jobs_inner_array.h"
#include "slurmrestapi/model/V0_0_40_job_comment.h"
#include "slurmrestapi/model/V0_0_41_openapi_job_info_resp_jobs_inner_derived_exit_code.h"
#include "slurmrestapi/model/V0_0_41_openapi_slurmdbd_jobs_resp_jobs_inner_association.h"
#include "slurmrestapi/model/V0_0_41_openapi_slurmdbd_jobs_resp_jobs_inner_exit_code.h"

namespace hm {
namespace slurm {
namespace client {
namespace model {

class V0_0_40_job_comment;
class V0_0_41_openapi_slurmdbd_jobs_resp_jobs_inner_array;
class V0_0_41_openapi_slurmdbd_jobs_resp_jobs_inner_association;
class V0_0_41_openapi_job_info_resp_jobs_inner_derived_exit_code;
class V0_0_41_openapi_slurmdbd_jobs_resp_jobs_inner_time;
class V0_0_41_openapi_slurmdbd_jobs_resp_jobs_inner_exit_code;
class V0_0_41_openapi_slurmdbd_jobs_resp_jobs_inner_het;
class V0_0_40_job_mcs;
class V0_0_41_job_desc_msg_priority;
class V0_0_41_openapi_slurmdbd_jobs_resp_jobs_inner_required;
class V0_0_40_job_reservation;
class V0_0_40_job_state;
class V0_0_41_openapi_slurmdbd_jobs_resp_jobs_inner_steps_inner;
class V0_0_41_openapi_slurmdbd_jobs_resp_jobs_inner_tres;
class V0_0_41_openapi_slurmdbd_jobs_resp_jobs_inner_wckey;


/// <summary>
/// 
/// </summary>
class  V0_0_41_openapi_slurmdbd_jobs_resp_jobs_inner
    : public ModelBase
{
public:
    V0_0_41_openapi_slurmdbd_jobs_resp_jobs_inner();
    virtual ~V0_0_41_openapi_slurmdbd_jobs_resp_jobs_inner();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// V0_0_41_openapi_slurmdbd_jobs_resp_jobs_inner members

    /// <summary>
    /// Account the job ran under
    /// </summary>
    utility::string_t getAccount() const;
    bool accountIsSet() const;
    void unsetAccount();

    void setAccount(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<V0_0_40_job_comment> getComment() const;
    bool commentIsSet() const;
    void unsetComment();

    void setComment(const std::shared_ptr<V0_0_40_job_comment>& value);

    /// <summary>
    /// List of nodes allocated to the job
    /// </summary>
    int32_t getAllocationNodes() const;
    bool allocationNodesIsSet() const;
    void unsetAllocation_nodes();

    void setAllocationNodes(int32_t value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<V0_0_41_openapi_slurmdbd_jobs_resp_jobs_inner_array> getArray() const;
    bool arrayIsSet() const;
    void unsetarray();

    void setArray(const std::shared_ptr<V0_0_41_openapi_slurmdbd_jobs_resp_jobs_inner_array>& value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<V0_0_41_openapi_slurmdbd_jobs_resp_jobs_inner_association> getAssociation() const;
    bool associationIsSet() const;
    void unsetAssociation();

    void setAssociation(const std::shared_ptr<V0_0_41_openapi_slurmdbd_jobs_resp_jobs_inner_association>& value);

    /// <summary>
    /// The name of the block to be used (used with Blue Gene systems)
    /// </summary>
    utility::string_t getBlock() const;
    bool blockIsSet() const;
    void unsetBlock();

    void setBlock(const utility::string_t& value);

    /// <summary>
    /// Cluster name
    /// </summary>
    utility::string_t getCluster() const;
    bool clusterIsSet() const;
    void unsetCluster();

    void setCluster(const utility::string_t& value);

    /// <summary>
    /// Feature(s) the job requested as a constraint
    /// </summary>
    utility::string_t getConstraints() const;
    bool constraintsIsSet() const;
    void unsetConstraints();

    void setConstraints(const utility::string_t& value);

    /// <summary>
    /// Absolute path to OCI container bundle
    /// </summary>
    utility::string_t getContainer() const;
    bool containerIsSet() const;
    void unsetContainer();

    void setContainer(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<V0_0_41_openapi_job_info_resp_jobs_inner_derived_exit_code> getDerivedExitCode() const;
    bool derivedExitCodeIsSet() const;
    void unsetDerived_exit_code();

    void setDerivedExitCode(const std::shared_ptr<V0_0_41_openapi_job_info_resp_jobs_inner_derived_exit_code>& value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<V0_0_41_openapi_slurmdbd_jobs_resp_jobs_inner_time> getTime() const;
    bool timeIsSet() const;
    void unsetTime();

    void setTime(const std::shared_ptr<V0_0_41_openapi_slurmdbd_jobs_resp_jobs_inner_time>& value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<V0_0_41_openapi_slurmdbd_jobs_resp_jobs_inner_exit_code> getExitCode() const;
    bool exitCodeIsSet() const;
    void unsetExit_code();

    void setExitCode(const std::shared_ptr<V0_0_41_openapi_slurmdbd_jobs_resp_jobs_inner_exit_code>& value);

    /// <summary>
    /// Arbitrary string used for node filtering if extra constraints are enabled
    /// </summary>
    utility::string_t getExtra() const;
    bool extraIsSet() const;
    void unsetExtra();

    void setExtra(const utility::string_t& value);

    /// <summary>
    /// Name of node that caused job failure
    /// </summary>
    utility::string_t getFailedNode() const;
    bool failedNodeIsSet() const;
    void unsetFailed_node();

    void setFailedNode(const utility::string_t& value);

    /// <summary>
    /// Flags associated with the job
    /// </summary>
    std::vector<utility::string_t>& getFlags();
    bool flagsIsSet() const;
    void unsetFlags();

    void setFlags(const std::vector<utility::string_t>& value);

    /// <summary>
    /// Group ID of the user that owns the job
    /// </summary>
    utility::string_t getGroup() const;
    bool groupIsSet() const;
    void unsetGroup();

    void setGroup(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<V0_0_41_openapi_slurmdbd_jobs_resp_jobs_inner_het> getHet() const;
    bool hetIsSet() const;
    void unsetHet();

    void setHet(const std::shared_ptr<V0_0_41_openapi_slurmdbd_jobs_resp_jobs_inner_het>& value);

    /// <summary>
    /// Job ID
    /// </summary>
    int32_t getJobId() const;
    bool jobIdIsSet() const;
    void unsetJob_id();

    void setJobId(int32_t value);

    /// <summary>
    /// Job name
    /// </summary>
    utility::string_t getName() const;
    bool nameIsSet() const;
    void unsetName();

    void setName(const utility::string_t& value);

    /// <summary>
    /// License(s) required by the job
    /// </summary>
    utility::string_t getLicenses() const;
    bool licensesIsSet() const;
    void unsetLicenses();

    void setLicenses(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<V0_0_40_job_mcs> getMcs() const;
    bool mcsIsSet() const;
    void unsetMcs();

    void setMcs(const std::shared_ptr<V0_0_40_job_mcs>& value);

    /// <summary>
    /// Node(s) allocated to the job
    /// </summary>
    utility::string_t getNodes() const;
    bool nodesIsSet() const;
    void unsetNodes();

    void setNodes(const utility::string_t& value);

    /// <summary>
    /// Partition assigned to the job
    /// </summary>
    utility::string_t getPartition() const;
    bool partitionIsSet() const;
    void unsetPartition();

    void setPartition(const utility::string_t& value);

    /// <summary>
    /// Hold (true) or release (false) job
    /// </summary>
    bool isHold() const;
    bool holdIsSet() const;
    void unsetHold();

    void setHold(bool value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<V0_0_41_job_desc_msg_priority> getPriority() const;
    bool priorityIsSet() const;
    void unsetPriority();

    void setPriority(const std::shared_ptr<V0_0_41_job_desc_msg_priority>& value);

    /// <summary>
    /// Quality of Service assigned to the job
    /// </summary>
    utility::string_t getQos() const;
    bool qosIsSet() const;
    void unsetQos();

    void setQos(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<V0_0_41_openapi_slurmdbd_jobs_resp_jobs_inner_required> getRequired() const;
    bool requiredIsSet() const;
    void unsetRequired();

    void setRequired(const std::shared_ptr<V0_0_41_openapi_slurmdbd_jobs_resp_jobs_inner_required>& value);

    /// <summary>
    /// User ID that requested termination of the job
    /// </summary>
    utility::string_t getKillRequestUser() const;
    bool killRequestUserIsSet() const;
    void unsetKill_request_user();

    void setKillRequestUser(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<V0_0_40_job_reservation> getReservation() const;
    bool reservationIsSet() const;
    void unsetReservation();

    void setReservation(const std::shared_ptr<V0_0_40_job_reservation>& value);

    /// <summary>
    /// Job batch script; only the first component in a HetJob is populated or honored
    /// </summary>
    utility::string_t getScript() const;
    bool scriptIsSet() const;
    void unsetScript();

    void setScript(const utility::string_t& value);

    /// <summary>
    /// Job stdin with expanded fields
    /// </summary>
    utility::string_t getStdinExpanded() const;
    bool stdinExpandedIsSet() const;
    void unsetStdin_expanded();

    void setStdinExpanded(const utility::string_t& value);

    /// <summary>
    /// Job stdout with expanded fields
    /// </summary>
    utility::string_t getStdoutExpanded() const;
    bool stdoutExpandedIsSet() const;
    void unsetStdout_expanded();

    void setStdoutExpanded(const utility::string_t& value);

    /// <summary>
    /// Job stderr with expanded fields
    /// </summary>
    utility::string_t getStderrExpanded() const;
    bool stderrExpandedIsSet() const;
    void unsetStderr_expanded();

    void setStderrExpanded(const utility::string_t& value);

    /// <summary>
    /// Path to stdout file
    /// </summary>
    utility::string_t getStdout() const;
    bool stdoutIsSet() const;
    void unsetStdout();

    void setStdout(const utility::string_t& value);

    /// <summary>
    /// Path to stderr file
    /// </summary>
    utility::string_t getStderr() const;
    bool stderrIsSet() const;
    void unsetStderr();

    void setStderr(const utility::string_t& value);

    /// <summary>
    /// Path to stdin file
    /// </summary>
    utility::string_t getStdin() const;
    bool stdinIsSet() const;
    void unsetStdin();

    void setStdin(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<V0_0_40_job_state> getState() const;
    bool stateIsSet() const;
    void unsetState();

    void setState(const std::shared_ptr<V0_0_40_job_state>& value);

    /// <summary>
    /// Individual steps in the job
    /// </summary>
    std::vector<std::shared_ptr<V0_0_41_openapi_slurmdbd_jobs_resp_jobs_inner_steps_inner>>& getSteps();
    bool stepsIsSet() const;
    void unsetSteps();

    void setSteps(const std::vector<std::shared_ptr<V0_0_41_openapi_slurmdbd_jobs_resp_jobs_inner_steps_inner>>& value);

    /// <summary>
    /// Command used to submit the job
    /// </summary>
    utility::string_t getSubmitLine() const;
    bool submitLineIsSet() const;
    void unsetSubmit_line();

    void setSubmitLine(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<V0_0_41_openapi_slurmdbd_jobs_resp_jobs_inner_tres> getTres() const;
    bool tresIsSet() const;
    void unsetTres();

    void setTres(const std::shared_ptr<V0_0_41_openapi_slurmdbd_jobs_resp_jobs_inner_tres>& value);

    /// <summary>
    /// Generic resources used by job
    /// </summary>
    utility::string_t getUsedGres() const;
    bool usedGresIsSet() const;
    void unsetUsed_gres();

    void setUsedGres(const utility::string_t& value);

    /// <summary>
    /// User that owns the job
    /// </summary>
    utility::string_t getUser() const;
    bool userIsSet() const;
    void unsetUser();

    void setUser(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<V0_0_41_openapi_slurmdbd_jobs_resp_jobs_inner_wckey> getWckey() const;
    bool wckeyIsSet() const;
    void unsetWckey();

    void setWckey(const std::shared_ptr<V0_0_41_openapi_slurmdbd_jobs_resp_jobs_inner_wckey>& value);

    /// <summary>
    /// Path to current working directory
    /// </summary>
    utility::string_t getWorkingDirectory() const;
    bool workingDirectoryIsSet() const;
    void unsetWorking_directory();

    void setWorkingDirectory(const utility::string_t& value);


protected:
    utility::string_t m_Account;
    bool m_AccountIsSet;
    std::shared_ptr<V0_0_40_job_comment> m_Comment;
    bool m_CommentIsSet;
    int32_t m_Allocation_nodes;
    bool m_Allocation_nodesIsSet;
    std::shared_ptr<V0_0_41_openapi_slurmdbd_jobs_resp_jobs_inner_array> m_array;
    bool m_arrayIsSet;
    std::shared_ptr<V0_0_41_openapi_slurmdbd_jobs_resp_jobs_inner_association> m_Association;
    bool m_AssociationIsSet;
    utility::string_t m_Block;
    bool m_BlockIsSet;
    utility::string_t m_Cluster;
    bool m_ClusterIsSet;
    utility::string_t m_Constraints;
    bool m_ConstraintsIsSet;
    utility::string_t m_Container;
    bool m_ContainerIsSet;
    std::shared_ptr<V0_0_41_openapi_job_info_resp_jobs_inner_derived_exit_code> m_Derived_exit_code;
    bool m_Derived_exit_codeIsSet;
    std::shared_ptr<V0_0_41_openapi_slurmdbd_jobs_resp_jobs_inner_time> m_Time;
    bool m_TimeIsSet;
    std::shared_ptr<V0_0_41_openapi_slurmdbd_jobs_resp_jobs_inner_exit_code> m_Exit_code;
    bool m_Exit_codeIsSet;
    utility::string_t m_Extra;
    bool m_ExtraIsSet;
    utility::string_t m_Failed_node;
    bool m_Failed_nodeIsSet;
    std::vector<utility::string_t> m_Flags;
    bool m_FlagsIsSet;
    utility::string_t m_Group;
    bool m_GroupIsSet;
    std::shared_ptr<V0_0_41_openapi_slurmdbd_jobs_resp_jobs_inner_het> m_Het;
    bool m_HetIsSet;
    int32_t m_Job_id;
    bool m_Job_idIsSet;
    utility::string_t m_Name;
    bool m_NameIsSet;
    utility::string_t m_Licenses;
    bool m_LicensesIsSet;
    std::shared_ptr<V0_0_40_job_mcs> m_Mcs;
    bool m_McsIsSet;
    utility::string_t m_Nodes;
    bool m_NodesIsSet;
    utility::string_t m_Partition;
    bool m_PartitionIsSet;
    bool m_Hold;
    bool m_HoldIsSet;
    std::shared_ptr<V0_0_41_job_desc_msg_priority> m_Priority;
    bool m_PriorityIsSet;
    utility::string_t m_Qos;
    bool m_QosIsSet;
    std::shared_ptr<V0_0_41_openapi_slurmdbd_jobs_resp_jobs_inner_required> m_Required;
    bool m_RequiredIsSet;
    utility::string_t m_Kill_request_user;
    bool m_Kill_request_userIsSet;
    std::shared_ptr<V0_0_40_job_reservation> m_Reservation;
    bool m_ReservationIsSet;
    utility::string_t m_Script;
    bool m_ScriptIsSet;
    utility::string_t m_Stdin_expanded;
    bool m_Stdin_expandedIsSet;
    utility::string_t m_Stdout_expanded;
    bool m_Stdout_expandedIsSet;
    utility::string_t m_Stderr_expanded;
    bool m_Stderr_expandedIsSet;
    utility::string_t m_Stdout;
    bool m_StdoutIsSet;
    utility::string_t m_Stderr;
    bool m_StderrIsSet;
    utility::string_t m_Stdin;
    bool m_StdinIsSet;
    std::shared_ptr<V0_0_40_job_state> m_State;
    bool m_StateIsSet;
    std::vector<std::shared_ptr<V0_0_41_openapi_slurmdbd_jobs_resp_jobs_inner_steps_inner>> m_Steps;
    bool m_StepsIsSet;
    utility::string_t m_Submit_line;
    bool m_Submit_lineIsSet;
    std::shared_ptr<V0_0_41_openapi_slurmdbd_jobs_resp_jobs_inner_tres> m_Tres;
    bool m_TresIsSet;
    utility::string_t m_Used_gres;
    bool m_Used_gresIsSet;
    utility::string_t m_User;
    bool m_UserIsSet;
    std::shared_ptr<V0_0_41_openapi_slurmdbd_jobs_resp_jobs_inner_wckey> m_Wckey;
    bool m_WckeyIsSet;
    utility::string_t m_Working_directory;
    bool m_Working_directoryIsSet;
};


}
}
}
}

#endif /* HM_SLURM_CLIENT_MODEL_V0_0_41_openapi_slurmdbd_jobs_resp_jobs_inner_H_ */
