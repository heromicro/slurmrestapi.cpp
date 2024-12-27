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
 * V0_0_40_step_nodes.h
 *
 * 
 */

#ifndef HM_SLURM_CLIENT_MODEL_V0_0_40_step_nodes_H_
#define HM_SLURM_CLIENT_MODEL_V0_0_40_step_nodes_H_


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
class  V0_0_40_step_nodes
    : public ModelBase
{
public:
    V0_0_40_step_nodes();
    virtual ~V0_0_40_step_nodes();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// V0_0_40_step_nodes members

    /// <summary>
    /// Number of nodes in the job step
    /// </summary>
    int32_t getCount() const;
    bool countIsSet() const;
    void unsetCount();

    void setCount(int32_t value);

    /// <summary>
    /// Node(s) allocated to the job step
    /// </summary>
    utility::string_t getRange() const;
    bool rangeIsSet() const;
    void unsetRange();

    void setRange(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    std::vector<utility::string_t>& getList();
    bool listIsSet() const;
    void unsetList();

    void setList(const std::vector<utility::string_t>& value);


protected:
    int32_t m_Count;
    bool m_CountIsSet;
    utility::string_t m_Range;
    bool m_RangeIsSet;
    std::vector<utility::string_t> m_List;
    bool m_ListIsSet;
};


}
}
}
}

#endif /* HM_SLURM_CLIENT_MODEL_V0_0_40_step_nodes_H_ */