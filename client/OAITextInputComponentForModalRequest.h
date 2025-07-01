/**
 * Discord HTTP API (Preview) - REST API Client
 * Preview of the Discord v10 HTTP API specification. See https://discord.com/developers/docs for more details.
 * 
 * ## Metadata
 *   
 * - **Copyright**: Copyright (c) 2025 Qntx
 * - **Author**: ΣX <gitctrlx@gmail.com>
 * - **Version**: 10
 * - **Modified**: 2025-07-01T06:33:49.033017897Z[Etc/UTC]
 * - **Generator Version**: 7.14.0
 *
 * <details>
 * <summary><strong>⚠️ Important Disclaimer & Limitation of Liability</strong></summary>
 * <br>
 * > **IMPORTANT**: This software is provided "as is" without any warranties, express or implied, including but not limited
 * > to warranties of merchantability, fitness for a particular purpose, or non-infringement. The developers, contributors,
 * > and licensors (collectively, "Developers") make no representations regarding the accuracy, completeness, or reliability
 * > of this software or its outputs.
 * >
 * > This client is not intended to provide financial, investment, tax, or legal advice. It facilitates interaction with the
 * > Discord HTTP API (Preview) service but does not endorse or recommend any financial actions, including the purchase, sale, or holding of
 * > financial instruments (e.g., stocks, bonds, derivatives, cryptocurrencies). Users must consult qualified financial or
 * > legal professionals before making decisions based on this software's outputs.
 * >
 * > Financial markets are inherently speculative and carry significant risks. Using this software in trading, analysis, or
 * > other financial activities may result in substantial losses, including total loss of capital. The Developers are not
 * > liable for any losses or damages arising from such use. Users assume full responsibility for validating the software's
 * > outputs and ensuring their suitability for intended purposes.
 * >
 * > This client may rely on third-party data or services (e.g., market feeds, APIs). The Developers do not control or verify
 * > the accuracy of these services and are not liable for any errors, delays, or losses resulting from their use. Users must
 * > comply with third-party terms and conditions.
 * >
 * > Users are solely responsible for ensuring compliance with all applicable financial, tax, and regulatory requirements in
 * > their jurisdiction. This includes obtaining necessary licenses or approvals for trading or investment activities. The
 * > Developers disclaim liability for any legal consequences arising from non-compliance.
 * >
 * > To the fullest extent permitted by law, the Developers shall not be liable for any direct, indirect, incidental,
 * > consequential, or punitive damages arising from the use or inability to use this software, including but not limited to
 * > loss of profits, data, or business opportunities.
 *
 * </details>
 */

/*
 * OAITextInputComponentForModalRequest.h
 *
 * 
 */

#ifndef OAITextInputComponentForModalRequest_H
#define OAITextInputComponentForModalRequest_H

#include <QJsonObject>

#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace dc_rest {

class OAITextInputComponentForModalRequest : public OAIObject {
public:
    OAITextInputComponentForModalRequest();
    OAITextInputComponentForModalRequest(QString json);
    ~OAITextInputComponentForModalRequest() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    qint32 getType() const;
    void setType(const qint32 &type);
    bool is_type_Set() const;
    bool is_type_Valid() const;

    QString getCustomId() const;
    void setCustomId(const QString &custom_id);
    bool is_custom_id_Set() const;
    bool is_custom_id_Valid() const;

    qint32 getStyle() const;
    void setStyle(const qint32 &style);
    bool is_style_Set() const;
    bool is_style_Valid() const;

    QString getLabel() const;
    void setLabel(const QString &label);
    bool is_label_Set() const;
    bool is_label_Valid() const;

    QString getValue() const;
    void setValue(const QString &value);
    bool is_value_Set() const;
    bool is_value_Valid() const;

    QString getPlaceholder() const;
    void setPlaceholder(const QString &placeholder);
    bool is_placeholder_Set() const;
    bool is_placeholder_Valid() const;

    bool isRequired() const;
    void setRequired(const bool &required);
    bool is_required_Set() const;
    bool is_required_Valid() const;

    qint32 getMinLength() const;
    void setMinLength(const qint32 &min_length);
    bool is_min_length_Set() const;
    bool is_min_length_Valid() const;

    qint32 getMaxLength() const;
    void setMaxLength(const qint32 &max_length);
    bool is_max_length_Set() const;
    bool is_max_length_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    qint32 m_type;
    bool m_type_isSet;
    bool m_type_isValid;

    QString m_custom_id;
    bool m_custom_id_isSet;
    bool m_custom_id_isValid;

    qint32 m_style;
    bool m_style_isSet;
    bool m_style_isValid;

    QString m_label;
    bool m_label_isSet;
    bool m_label_isValid;

    QString m_value;
    bool m_value_isSet;
    bool m_value_isValid;

    QString m_placeholder;
    bool m_placeholder_isSet;
    bool m_placeholder_isValid;

    bool m_required;
    bool m_required_isSet;
    bool m_required_isValid;

    qint32 m_min_length;
    bool m_min_length_isSet;
    bool m_min_length_isValid;

    qint32 m_max_length;
    bool m_max_length_isSet;
    bool m_max_length_isValid;
};

} // namespace dc_rest

Q_DECLARE_METATYPE(dc_rest::OAITextInputComponentForModalRequest)

#endif // OAITextInputComponentForModalRequest_H
