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
 * V0_0_40_step_tres_consumed.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_V0_0_40_step_tres_consumed_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_V0_0_40_step_tres_consumed_H_


#include "slurmrestapi/ModelBase.h"

#include "slurmrestapi/model/V0_0_40_tres.h"
#include <vector>

namespace org {
namespace openapitools {
namespace client {
namespace model {

class V0_0_40_tres;


/// <summary>
/// 
/// </summary>
class  V0_0_40_step_tres_consumed
    : public ModelBase
{
public:
    V0_0_40_step_tres_consumed();
    virtual ~V0_0_40_step_tres_consumed();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// V0_0_40_step_tres_consumed members

    /// <summary>
    /// 
    /// </summary>
    std::vector<std::shared_ptr<V0_0_40_tres>>& getMax();
    bool maxIsSet() const;
    void unsetMax();

    void setMax(const std::vector<std::shared_ptr<V0_0_40_tres>>& value);

    /// <summary>
    /// 
    /// </summary>
    std::vector<std::shared_ptr<V0_0_40_tres>>& getMin();
    bool minIsSet() const;
    void unsetMin();

    void setMin(const std::vector<std::shared_ptr<V0_0_40_tres>>& value);

    /// <summary>
    /// 
    /// </summary>
    std::vector<std::shared_ptr<V0_0_40_tres>>& getAverage();
    bool averageIsSet() const;
    void unsetAverage();

    void setAverage(const std::vector<std::shared_ptr<V0_0_40_tres>>& value);

    /// <summary>
    /// 
    /// </summary>
    std::vector<std::shared_ptr<V0_0_40_tres>>& getTotal();
    bool totalIsSet() const;
    void unsetTotal();

    void setTotal(const std::vector<std::shared_ptr<V0_0_40_tres>>& value);


protected:
    std::vector<std::shared_ptr<V0_0_40_tres>> m_Max;
    bool m_MaxIsSet;
    std::vector<std::shared_ptr<V0_0_40_tres>> m_Min;
    bool m_MinIsSet;
    std::vector<std::shared_ptr<V0_0_40_tres>> m_Average;
    bool m_AverageIsSet;
    std::vector<std::shared_ptr<V0_0_40_tres>> m_Total;
    bool m_TotalIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_V0_0_40_step_tres_consumed_H_ */
