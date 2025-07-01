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
 * OAIActionRowComponentForMessageRequest_components_inner.h
 *
 * 
 */

#ifndef OAIActionRowComponentForMessageRequest_components_inner_H
#define OAIActionRowComponentForMessageRequest_components_inner_H

#include <QJsonObject>

#include "OAIButtonComponentForMessageRequest.h"
#include "OAIChannelSelectComponentForMessageRequest.h"
#include "OAIComponentEmojiForMessageRequest.h"
#include "OAIMentionableSelectComponentForMessageRequest.h"
#include "OAIRoleSelectComponentForMessageRequest.h"
#include "OAIStringSelectComponentForMessageRequest.h"
#include "OAIStringSelectOptionForMessageRequest.h"
#include "OAIUserSelectComponentForMessageRequest.h"
#include "OAIUserSelectDefaultValue.h"
#include <QList>
#include <QSet>
#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace dc_rest {
class OAIStringSelectOptionForMessageRequest;
class OAIComponentEmojiForMessageRequest;
class OAIUserSelectDefaultValue;

class OAIActionRowComponentForMessageRequest_components_inner : public OAIObject {
public:
    OAIActionRowComponentForMessageRequest_components_inner();
    OAIActionRowComponentForMessageRequest_components_inner(QString json);
    ~OAIActionRowComponentForMessageRequest_components_inner() override;

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

    QList<OAIStringSelectOptionForMessageRequest> getOptions() const;
    void setOptions(const QList<OAIStringSelectOptionForMessageRequest> &options);
    bool is_options_Set() const;
    bool is_options_Valid() const;

    QString getLabel() const;
    void setLabel(const QString &label);
    bool is_label_Set() const;
    bool is_label_Valid() const;

    bool isDisabled() const;
    void setDisabled(const bool &disabled);
    bool is_disabled_Set() const;
    bool is_disabled_Valid() const;

    QString getUrl() const;
    void setUrl(const QString &url);
    bool is_url_Set() const;
    bool is_url_Valid() const;

    QString getSkuId() const;
    void setSkuId(const QString &sku_id);
    bool is_sku_id_Set() const;
    bool is_sku_id_Valid() const;

    OAIComponentEmojiForMessageRequest getEmoji() const;
    void setEmoji(const OAIComponentEmojiForMessageRequest &emoji);
    bool is_emoji_Set() const;
    bool is_emoji_Valid() const;

    QString getPlaceholder() const;
    void setPlaceholder(const QString &placeholder);
    bool is_placeholder_Set() const;
    bool is_placeholder_Valid() const;

    qint32 getMinValues() const;
    void setMinValues(const qint32 &min_values);
    bool is_min_values_Set() const;
    bool is_min_values_Valid() const;

    qint32 getMaxValues() const;
    void setMaxValues(const qint32 &max_values);
    bool is_max_values_Set() const;
    bool is_max_values_Valid() const;

    QList<OAIUserSelectDefaultValue> getDefaultValues() const;
    void setDefaultValues(const QList<OAIUserSelectDefaultValue> &default_values);
    bool is_default_values_Set() const;
    bool is_default_values_Valid() const;

    QSet<qint32> getChannelTypes() const;
    void setChannelTypes(const QSet<qint32> &channel_types);
    bool is_channel_types_Set() const;
    bool is_channel_types_Valid() const;

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

    QList<OAIStringSelectOptionForMessageRequest> m_options;
    bool m_options_isSet;
    bool m_options_isValid;

    QString m_label;
    bool m_label_isSet;
    bool m_label_isValid;

    bool m_disabled;
    bool m_disabled_isSet;
    bool m_disabled_isValid;

    QString m_url;
    bool m_url_isSet;
    bool m_url_isValid;

    QString m_sku_id;
    bool m_sku_id_isSet;
    bool m_sku_id_isValid;

    OAIComponentEmojiForMessageRequest m_emoji;
    bool m_emoji_isSet;
    bool m_emoji_isValid;

    QString m_placeholder;
    bool m_placeholder_isSet;
    bool m_placeholder_isValid;

    qint32 m_min_values;
    bool m_min_values_isSet;
    bool m_min_values_isValid;

    qint32 m_max_values;
    bool m_max_values_isSet;
    bool m_max_values_isValid;

    QList<OAIUserSelectDefaultValue> m_default_values;
    bool m_default_values_isSet;
    bool m_default_values_isValid;

    QSet<qint32> m_channel_types;
    bool m_channel_types_isSet;
    bool m_channel_types_isValid;
};

} // namespace dc_rest

Q_DECLARE_METATYPE(dc_rest::OAIActionRowComponentForMessageRequest_components_inner)

#endif // OAIActionRowComponentForMessageRequest_components_inner_H
